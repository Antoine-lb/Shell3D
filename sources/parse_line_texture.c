#include "../includes/cub3d.h"

int parse_line_texture(t_texture *texture, char *line)
{
    char *path;
    int fd;

    if (line[0] == 'N' && line[1] == 'O')
    {
        path = get_path(line, 2);
        fd = open(path, O_RDONLY);
        if (fd > 0)
            texture->textures[0] = path;
        else
            return (0);
    }
    else if (line[0] == 'S' && line[1] == 'O')
    {
        path = get_path(line, 2);
        fd = open(path, O_RDONLY);
        if (fd > 0)
            texture->textures[1] = path;
        else
            return (0);
    }
    else if (line[0] == 'E' && line[1] == 'A')
    {
        path = get_path(line, 2);
        fd = open(path, O_RDONLY);
        if (fd > 0)
            texture->textures[2] = path;
        else
            return (0);
    }
    else if (line[0] == 'W' && line[1] == 'E')
    {
        path = get_path(line, 2);
        fd = open(path, O_RDONLY);
        if (fd > 0)
            texture->textures[3] = path;
        else
            return (0);
    }
    return (1);
}