#include "../includes/cub3d.h"

void draw_line_terminal(t_g *g, int x, int drawStart, int drawEnd)
{
    int i;

    i = 0;

    while (i < g->screen.screenHeight)
    {
        if (i > drawStart && i < drawEnd)
        {
            if (g->side == 1)
            {
                g->screen.currentScreen[(i * g->screen.screenWidth) + x] = '+';
            }
            else
            {
                g->screen.currentScreen[(i * g->screen.screenWidth) + x] = '0';
            }
        }
        else
        {
            if (i > (g->screen.screenHeight / 2))
            {
                g->screen.currentScreen[(i * g->screen.screenWidth) + x] = '-';
            }
            else
            {
                g->screen.currentScreen[(i * g->screen.screenWidth) + x] = '.';
            }
        }
        i++;
    }
}

int print_in_terminal(t_g *g)
{
    int xx = 0;
    int yy = 0;

    write(1, "\033[30A", 5);
    write(1, "\033[140D", 6);

    get_screenshot(g, &draw_line_terminal);
    write(1, g->screen.currentScreen, g->screen.screenHeight * g->screen.screenWidth);

    printf("|-----------------------------------------|\n");
    printf("| A,W,S,D or arrows to move               |\n");
    printf("| U & I to increase/decrese screen width  |\n");
    printf("| J & K to increase/decrese screen height |\n");
    printf("| ESC or CTRL+C to quit                   |\n");
    printf("|-----------------------------------------|\n");
    return (0);
}