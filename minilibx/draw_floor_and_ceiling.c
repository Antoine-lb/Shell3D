#include "../cub3d.h"

void draw_floor_and_ceiling_textures(t_g *g)
{
    for (int y = 0; y < g->screen.screenHeight; y++)
    {
        // rayDir for leftmost ray (x = 0) and rightmost ray (x = w)
        float rayDirX0 = g->player.dirX - g->screen.planeX;
        float rayDirY0 = g->player.dirY - g->screen.planeY;
        float rayDirX1 = g->player.dirX + g->screen.planeX;
        float rayDirY1 = g->player.dirY + g->screen.planeY;

        // Current y position compared to the center of the screen (the horizon)
        int p = y - g->screen.screenHeight / 2;

        // Vertical position of the camera.
        float posZ = 0.5 * g->screen.screenHeight;

        // Horizontal distance from the camera to the floor for the current row.
        // 0.5 is the z position exactly in the middle between floor and ceiling.
        float rowDistance = posZ / p;

        // calculate the real world step vector we have to add for each x (parallel to camera plane)
        // adding step by step avoids multiplications with a weight in the inner loop
        float floorStepX = rowDistance * (rayDirX1 - rayDirX0) / g->screen.screenWidth;
        float floorStepY = rowDistance * (rayDirY1 - rayDirY0) / g->screen.screenWidth;

        // real world coordinates of the leftmost column. This will be updated as we step to the right.
        float floorX = g->player.posX + rowDistance * rayDirX0;
        float floorY = g->player.posY + rowDistance * rayDirY0;

        for (int x = 0; x < g->screen.screenWidth; ++x)
        {
            // the cell coord is simply got from the integer parts of floorX and floorY
            int cellX = (int)(floorX);
            int cellY = (int)(floorY);

            // get the texture coordinate from the fractional part
            int tx = (int)(g->texture.texture_north.width * (floorX - cellX)) & (g->texture.texture_north.width - 1);
            int ty = (int)(g->texture.texture_north.height * (floorY - cellY)) & (g->texture.texture_north.height - 1);

            floorX += floorStepX;
            floorY += floorStepY;

            // floor
            int color = g->texture.texture_north.data[g->texture.texture_north.width * ty + tx];
            color = (color >> 1) & 8355711; // make a bit darker
            g->img.data[y * g->screen.screenWidth + x] = color;


            //ceiling (symmetrical, at screenHeight - y - 1 instead of y)
            color = g->texture.texture_south.data[g->texture.texture_south.width * ty + tx];
            color = (color >> 1) & 8355711; // make a bit darker
            g->img.data[(g->screen.screenHeight - y - 1) * g->screen.screenWidth + x] = color;
            // buffer[screenHeight_global - y - 1][x] = color;
        }
    }
}

void draw_floor_and_ceiling_color(t_g *g)
{
    for (int y = 0; y < g->screen.screenHeight; y++)
    {
        for (int x = 0; x < g->screen.screenWidth; ++x)
        {
            g->img.data[y * g->screen.screenWidth + x] = g->texture.floor_color;
            g->img.data[(g->screen.screenHeight - y - 1) * g->screen.screenWidth + x] = g->texture.ceiling_color;
        }
    }
}

void draw_floor_and_ceiling(t_g *g)
{
    if (g->textured_floor_and_ceiling)
    {
        draw_floor_and_ceiling_textures(g);
    }
    else
    {
        draw_floor_and_ceiling_color(g);
    }
}
