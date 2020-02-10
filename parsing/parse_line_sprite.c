#include "../cub3d.h"

int parse_line_sprite(t_sprites *sprite, char *line)
{
    char *path;
    int fd;

    path = get_path(line, 1);
    fd = open(path, O_RDONLY);
    if (fd > 0)
        sprite->img_path = path;
    else
        return (0);
    return (1);
}