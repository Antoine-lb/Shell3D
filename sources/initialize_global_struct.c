#include "../includes/cub3d.h"

void ft_bzero(void *b, size_t len)
{
    size_t count;
    unsigned char *res;

    count = 0;
    res = b;
    while (count < len)
    {
        res[count] = 0;
        count++;
    }
}

void initialize_global_struct(t_g *g)
{
    g->mlx_ptr = NULL;
    g->mlx_win = NULL;

    ft_bzero(g->key_presed, 280); // set the key being press to 0

    g->side = 0;

    g->textured_floor_and_ceiling = 0;

    g->map.mapWidth = 0;
    g->map.mapHeight = 0;
    g->map.board = NULL;

    g->screen.screenWidth = 0;
    g->screen.screenHeight = 0;
    g->screen.planeX = 0.0;
    g->screen.planeY = 0.0;

    g->player.posX = 0.0;
    g->player.posY = 0.0;
    g->player.dirX = 0.0;
    g->player.dirY = 0.0;
}