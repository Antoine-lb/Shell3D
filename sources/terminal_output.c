#include "../includes/cub3d.h"

void draw_line_terminal(t_g *g, int x, int drawStart, int drawEnd)
{
    while (drawStart <= drawEnd)
    {

        if (g->side == 1)
        {
            g->currentScreen[x][drawStart] = 1;
        }
        else
        {
            g->currentScreen[x][drawStart] = 2;
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
            g->currentScreen[xx][yy] = 0;
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
            if (g->currentScreen[xx][yy] == 0)
            {
                printf(".");
            }
            else if (g->currentScreen[xx][yy] == 1)
            {
                printf("$");
            }
            else if (g->currentScreen[xx][yy] == 2)
            {
                printf("s");
            }
            else if (g->currentScreen[xx][yy] == 3)
            {
                printf("@");
            }
            else
            {
                printf("%d", g->currentScreen[xx][yy]);
            }
            xx++;
        }
        yy++;
        xx = 0;
        printf("\n");
    }

    return (0);
}