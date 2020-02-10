#include "../includes/cub3d.h"

char *get_path(char *line, int start)
{
    int x;
    int y;
    int beginning_of_path;
    int end_of_path;
    char *path;

    x = start;
    while (line[x] && line[x] == ' ')
        x++;
    beginning_of_path = x;
    while (line[x] && line[x] != ' ')
        x++;
    end_of_path = x;
    if (beginning_of_path == end_of_path)
        return (NULL);
    path = (char *)malloc((end_of_path - beginning_of_path + 1) * sizeof(char));
    if (path == NULL)
        return (NULL);
    x = beginning_of_path;
    y = 0;
    while (x <= end_of_path)
    {
        path[y] = line[x];
        y++;
        x++;
    }
    return (path);
}