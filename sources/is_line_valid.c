#include "../includes/cub3d.h"

int is_line_valid(char *line)
{
    int x;

    x = 0;
    while (line[x] && (line[x] == '0' ||
                       line[x] == '1' ||
                       line[x] == '2' ||
                       line[x] == 'N' ||
                       line[x] == 'S' ||
                       line[x] == 'E' ||
                       line[x] == 'W'))
    {
        x++;
    }
    // beginning and end is `1`
    if (line[x])
        return (0);
    return (1);
}