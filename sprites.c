#include "cub3d.h"

void sortSprites(t_g *g)
{
    int is_done = 0;
    int i = 0;
    int tmp;

    while (!is_done)
    {
        is_done = 1;
        i = 0;
        while (i < (g->sprite.numSprites - 1))
        {
            if (g->sprite.sprites[g->sprite.spriteOrder[i]][2] < g->sprite.sprites[g->sprite.spriteOrder[i + 1]][2])
            {
                tmp = g->sprite.spriteOrder[i];
                g->sprite.spriteOrder[i] = g->sprite.spriteOrder[i + 1];
                g->sprite.spriteOrder[i + 1] = tmp;
                is_done = 0;
            }
            i++;
        }
    }
}

void sprite_casting(t_g *g)
{
    //SPRITE CASTING
    //sort sprites from far to close
    for(int i = 0; i < g->sprite.numSprites; i++)
    {
       g->sprite.spriteOrder[i] = i;
       g->sprite.sprites[i][2] = (( g->player.posX - g->sprite.sprites[i][0]) * (g->player.posX - g->sprite.sprites[i][0]) + (g->player.posY - g->sprite.sprites[i][1]) * (g->player.posY - g->sprite.sprites[i][1])); //sqrt not taken, unneeded
    }
    sortSprites(g);

    // //after sorting the sprites, do the projection and draw them
    for (int i = 0; i < g->sprite.numSprites; i++)
    {
        //translate sprite position to relative to camera
        double spriteX = g->sprite.sprites[g->sprite.spriteOrder[i]][0] - g->player.posX;
        double spriteY = g->sprite.sprites[g->sprite.spriteOrder[i]][1] - g->player.posY;

        //transform sprite with the inverse camera matrix
        // [ planeX   dirX ] -1                                       [ dirY      -dirX ]
        // [               ]       =  1/(planeX*dirY-dirX*planeY) *   [                 ]
        // [ planeY   dirY ]                                          [ -planeY  planeX ]
        double invDet = 1.0 / (g->screen.planeX * g->player.dirY - g->player.dirX * g->screen.planeY); //required for correct matrix multiplication

        double transformX = invDet * (g->player.dirY * spriteX - g->player.dirX * spriteY);
        double transformY = invDet * (-(g->screen.planeY) * spriteX + g->screen.planeX * spriteY); //this is actually the depth inside the screen, that what Z is in 3D

        int spriteScreenX = (int)((g->screen.screenWidth / 2) * (1 + transformX / transformY));

        //parameters for scaling and moving the sprites
        #define uDiv 1
        #define vDiv 1
        #define vMove 100
        int vMoveScreen = (int)(vMove / transformY);

        //calculate height of the sprite on screen
        int spriteHeight = abs((int)(g->screen.screenHeight / (transformY))) / vDiv; //using "transformY" instead of the real distance prevents fisheye
        //calculate lowest and highest pixel to fill in current stripe
        int drawStartY = -spriteHeight / 2 + g->screen.screenHeight / 2 + vMoveScreen;
        if (drawStartY < 0)
            drawStartY = 0;
        int drawEndY = spriteHeight / 2 + g->screen.screenHeight / 2 + vMoveScreen;
        if (drawEndY >= g->screen.screenHeight)
            drawEndY = g->screen.screenHeight - 1;

        //calculate width of the sprite
        int spriteWidth = abs((int)(g->screen.screenHeight / (transformY))) / uDiv;
        int drawStartX = -spriteWidth / 2 + spriteScreenX;
        if (drawStartX < 0)
            drawStartX = 0;
        int drawEndX = spriteWidth / 2 + spriteScreenX;
        if (drawEndX >= g->screen.screenWidth)
            drawEndX = g->screen.screenWidth - 1;

        //loop through every vertical stripe of the sprite on screen
        for (int stripe = drawStartX; stripe < drawEndX; stripe++)
        {
            int texX = (int)(256 * (stripe - (-spriteWidth / 2 + spriteScreenX)) * g->sprite.sprite_texture.width / spriteWidth) / 256;
            //the conditions in the if are:
            //1) it's in front of camera plane so you don't see things behind you
            //2) it's on the screen (left)
            //3) it's on the screen (right)
            //4) ZBuffer, with perpendicular distance
            if (transformY > 0 && stripe > 0 && stripe < g->screen.screenWidth && transformY < g->sprite.ZBuffer[stripe])
                for (int y = drawStartY; y < drawEndY; y++) //for every pixel of the current stripe
                {
                    int d = (y - vMoveScreen) * 256 - g->screen.screenHeight * 128 + spriteHeight * 128; //256 and 128 factors to avoid floats
                    int texY = ((d * g->sprite.sprite_texture.height) / spriteHeight) / 256;

                    int color = g->sprite.sprite_texture.data[g->sprite.sprite_texture.width * texY + texX];
                    if ((color & 0x00FFFFFF) != 0)
                    {
                        g->img.data[y * g->screen.screenWidth + stripe] = color;
                        g->currentScreen[y][stripe] = 3;
                    }
                }
        }
    }
}