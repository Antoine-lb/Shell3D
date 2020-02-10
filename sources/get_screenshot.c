#include "../includes/cub3d.h"

void get_screenshot(t_g *g, void (*draw_line)(t_g *, int, int, int))
{
	for (int x = 0; x < g->screen.screenWidth; x++)
	{
		//calculate ray position and direction
		double cameraX = 2 * x / ((double)g->screen.screenWidth) - 1; //x-coordinate in camera space
		g->rayDirX = g->player.dirX + g->screen.planeX * cameraX;
		g->rayDirY = g->player.dirY + g->screen.planeY * cameraX;
		//which box of the map we're in
		int mapX = (int)(g->player.posX);
		int mapY = (int)(g->player.posY);

		//length of ray from current position to next x or y-side
		double sideDistX;
		double sideDistY;

		//length of ray from one x or y-side to next x or y-side
		double deltaDistX = fabs(1 / g->rayDirX);
		double deltaDistY = fabs(1 / g->rayDirY);

		//what direction to step in x or y-direction (either +1 or -1)
		int stepX;
		int stepY;

		int hit = 0; //was there a wall hit?
		int side;		 //was a NS or a EW wall hit?
		//calculate step and initial sideDist
		if (g->rayDirX < 0)
		{
			stepX = -1;
			sideDistX = (g->player.posX - mapX) * deltaDistX;
		}
		else
		{
			stepX = 1;
			sideDistX = (mapX + 1.0 - g->player.posX) * deltaDistX;
		}
		if (g->rayDirY < 0)
		{
			stepY = -1;
			sideDistY = (g->player.posY - mapY) * deltaDistY;
		}
		else
		{
			stepY = 1;
			sideDistY = (mapY + 1.0 - g->player.posY) * deltaDistY;
		}
		//perform DDA
		while (hit == 0)
		{
			//jump to next map square, OR in x-direction, OR in y-direction
			if (sideDistX < sideDistY)
			{
				sideDistX += deltaDistX;
				mapX += stepX;
				side = 0;
			}
			else
			{
				sideDistY += deltaDistY;
				mapY += stepY;
				side = 1;
			}
			//Check if ray has hit a wall
			if (g->map.board[mapX][mapY] > 0)
				hit = 1;
		}

		//Calculate distance projected on camera direction (Euclidean distance will give fisheye effect!)
		if (side == 0)
			g->perpWallDist = (mapX - g->player.posX + (1 - stepX) / 2) / g->rayDirX;
		else
			g->perpWallDist = (mapY - g->player.posY + (1 - stepY) / 2) / g->rayDirY;

		g->side = side;
		//Calculate height of line to draw on screen
		g->lineHeight = (int)(g->screen.screenHeight / g->perpWallDist);

		//calculate lowest and highest pixel to fill in current stripe
		int drawStart = -g->lineHeight / 2 + g->screen.screenHeight / 2;
		if (drawStart < 0)
			drawStart = 0;
		int drawEnd = g->lineHeight / 2 + g->screen.screenHeight / 2;
		if (drawEnd >= g->screen.screenHeight)
			drawEnd = g->screen.screenHeight - 1;

		g->sprite.ZBuffer[x] = g->perpWallDist;
		draw_line(g, x, drawStart, drawEnd);
	}
}