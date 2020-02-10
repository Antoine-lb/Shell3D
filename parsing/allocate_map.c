#include "../cub3d.h"

int allocate_map(t_map *map)
{
    int x = 0;
    map->board = (int **)malloc((map->mapHeight) * sizeof(int *));
    if (!map->board)
        return (0);
    while (x < map->mapHeight)
    {
        map->board[x] = (int *)malloc((map->mapWidth) * sizeof(int));
        if (!map->board[x])
            return (0);
        x++;
    }  
    return (1);
}