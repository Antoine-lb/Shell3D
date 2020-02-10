#include "cub3d.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;
	unsigned char *res;
	unsigned char *src_ptr;

	if (!dst && !src)
		return (NULL);
	count = 0;
	res = dst;
	src_ptr = (unsigned char *)src;
	while (count < n)
	{
		res[count] = src_ptr[count];
		count++;
	}
	return (void *)res;
}

void print_map(t_map *map)
{
	int x = 0;
	int y = 0;

	printf("map->mapWidth = %d\n", map->mapWidth);
	printf("map->mapHeight = %d\n", map->mapHeight);

	while (x < map->mapHeight)
	{
		while (y < map->mapWidth)
		{
			printf("map->map[%d][%d] = %d\n", x, y, map->board[x][y]);
			y++;
		}
		printf("\n");
		x++;
		y = 0;
	}
}

int main(int ac, char **av)
{
	t_g g;

	if (!ac)
		return (-1);

	initialize_global_struct(&g);

	if (!(open_and_parse_file(&g, av[1])))
		return (0);


	print_in_texture(&g);

	while (1);
	// return (print_in_texture(&g));
	return (0);
}