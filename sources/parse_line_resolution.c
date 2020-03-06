#include "../includes/cub3d.h"

int parse_line_resolution(t_screen *screen, char *line)
{
    int x;

    x = 1;
    while (line[x] && line[x] == ' ')
        x++;

    if (!ft_isdigit(line[x]))
        return (deal_error("Invalid Screen Width"));

    screen->screenWidth = ft_atoi(line + x);

    while (line[x] && line[x] != ' ')
        x++;
    while (line[x] && line[x] == ' ')
        x++;

    if (!ft_isdigit(line[x]))
        return (deal_error("Invalid Screen Height"));

    screen->screenHeight = ft_atoi(line + x);

    if (screen->screenWidth < 1 || screen->screenHeight < 1)
        return (deal_error("Invalid Screen Size"));

    screen->currentScreen = (char *)malloc(sizeof(char) * ((screen->screenWidth + 1) * screen->screenHeight));
    return (1);
}