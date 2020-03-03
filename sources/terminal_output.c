#include "../includes/cub3d.h"

void draw_line_terminal(t_g *g, int x, int drawStart, int drawEnd)
{
    while (drawStart <= drawEnd)
    {

        if (g->side == 1)
        {
            g->screen.currentScreen[(x * g->screen.screenHeight) + drawStart] = '+';
        }
        else
        {
            g->screen.currentScreen[(x * g->screen.screenHeight) + drawStart] = '0';
        }
        drawStart++;
    }
}

int print_in_terminal(t_g *g)
{
    int xx = 0;
    int yy = 0;

    while (xx < g->screen.screenWidth)
    {
        while (yy < g->screen.screenHeight)
        {
            g->screen.currentScreen[(xx * g->screen.screenHeight) + yy] = '.';
            yy++;
        }
        xx++;
        yy = 0;
    }

    write(1, "\033[30A", 5);
    write(1, "\033[140D", 6);

    get_screenshot(g, &draw_line_terminal);

    xx = 0;
    yy = 0;
    while (yy < g->screen.screenHeight)
    {
        while (xx < g->screen.screenWidth)
        {
            printf("%c", g->screen.currentScreen[(xx * g->screen.screenHeight) + yy]);
            xx++;
        }
        yy++;
        xx = 0;
        printf("\n");
    }

    printf("|-----------------------------------------|\n");
    printf("| A,W,S,D or arrows to move               |\n");
    printf("| U & I to increase/decrese screen width  |\n");
    printf("| J & K to increase/decrese screen height |\n");
    printf("| ESC or CTRL+C to quit                   |\n");
    printf("|-----------------------------------------|\n");
    return (0);
}