#include "../cub3d.h"

int parse_line_floor_and_ceiling(t_texture *texture, char *line)
{
    char **line_arr;
    int red;
    int green;
    int blue;

    line_arr = ft_split(line, " ,");
    red = ft_atoi(line_arr[1]);
    green = ft_atoi(line_arr[2]);
    blue = ft_atoi(line_arr[3]);

    if (!(red >= 0 && red <= 255) ||
        !(green >= 0 && green <= 255) ||
        !(blue >= 0 && blue <= 255))
    {
        return (0);
    }

    if (line[0] == 'F' && line[1] == ' ')
        texture->floor_color = create_rgb(red, green, blue);
    else if (line[0] == 'C' && line[1] == ' ')
        texture->ceiling_color = create_rgb(red, green, blue);
    return (1);
}