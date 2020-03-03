#include "../includes/cub3d.h"

int put_map_line_in_struct(t_g *g, char *content, int x)
{
    int y = 0;

    if (content != NULL)
    {
        while (content[y])
        {
            if (content[y] == '1')
                g->map.board[x][y] = 1;
            else if (content[y] == '2')
            {
                g->map.board[x][y] = 0;
            }
            else if (content[y] == 'N' || content[y] == 'S' || content[y] == 'E' || content[y] == 'W')
            {
                if (content[y] == 'N')
                {
                    g->player.dirX = -1.0;
                    g->player.dirY = 0.0;
                    g->screen.planeX = 0.0;
                    g->screen.planeY = 0.66;
                }
                else if (content[y] == 'S')
                {
                    g->player.dirX = 1.0;
                    g->player.dirY = 0.0;
                    g->screen.planeX = 0.0;
                    g->screen.planeY = -0.66;
                }
                else if (content[y] == 'E')
                {
                    g->player.dirX = 0.0;
                    g->player.dirY = -1.0;
                    g->screen.planeX = -0.66;
                    g->screen.planeY = 0.0;
                }
                else if (content[y] == 'W')
                {
                    g->player.dirX = 0.0;
                    g->player.dirY = 1.0;
                    g->screen.planeX = 0.66;
                    g->screen.planeY = 0.0;
                }
                g->map.board[x][y] = 0;
                g->player.posX = x;
                g->player.posY = y;
            }
            else
                g->map.board[x][y] = 0;
            y++;
        }
        y = 0;
    }
    return (1);
}