#include "../includes/cub3d.h"

// void deal_key_a(t_g *g, double move_speed, double security)
// {
// 	if (g->key_presed[KEY_A])
// 	{
// 		if (g->map.board[(int)(g->player.pos_x - g->screen.plane_x * security)][(int)g->player.pos_y] == EMPTY)
// 			g->player.pos_x -= g->screen.plane_x * move_speed;
// 		if (g->map.board[(int)g->player.pos_x][(int)(g->player.pos_y - g->screen.plane_y * security)] == EMPTY)
// 			g->player.pos_y -= g->screen.plane_y * move_speed;
// 	}
// }

// void deal_key_d(t_g *g, double move_speed, double security)
// {
// 	if (g->key_presed[KEY_D])
// 	{
// 		if (g->map.board[(int)(g->player.pos_x + g->screen.plane_x * security)][(int)g->player.pos_y] == EMPTY)
// 			g->player.pos_x += g->screen.plane_x * move_speed;
// 		if (g->map.board[(int)g->player.pos_x][(int)(g->player.pos_y + g->screen.plane_y * security)] == EMPTY)
// 			g->player.pos_y += g->screen.plane_y * move_speed;
// 	}
// }

void deal_key_left(t_g *g, double rotspeed)
{
	double old_dirX;
	double old_planeX;

	old_dirX = g->player.dirX;
	old_planeX = g->screen.planeX;
	g->player.dirX = g->player.dirX * cos(rotspeed) - g->player.dirY * sin(rotspeed);
	g->player.dirY = old_dirX * sin(rotspeed) + g->player.dirY * cos(rotspeed);
	g->screen.planeX = g->screen.planeX * cos(rotspeed) - g->screen.planeY * sin(rotspeed);
	g->screen.planeY = old_planeX * sin(rotspeed) + g->screen.planeY * cos(rotspeed);
}

void deal_key_right(t_g *g, double rotspeed)
{
	double old_dirX;
	double old_planeX;

	old_dirX = g->player.dirX;
	old_planeX = g->screen.planeX;
	g->player.dirX = g->player.dirX * cos(-rotspeed) - g->player.dirY * sin(-rotspeed);
	g->player.dirY = old_dirX * sin(-rotspeed) + g->player.dirY * cos(-rotspeed);
	g->screen.planeX = g->screen.planeX * cos(-rotspeed) - g->screen.planeY * sin(-rotspeed);
	g->screen.planeY = old_planeX * sin(-rotspeed) + g->screen.planeY * cos(-rotspeed);
}

void deal_key_up(t_g *g, double move_speed, double security)
{
	if (g->map.board[(int)(g->player.posX + g->player.dirX * security)][(int)g->player.posY] == EMPTY)
		g->player.posX += g->player.dirX * move_speed;
	if (g->map.board[(int)g->player.posX][(int)(g->player.posY + g->player.dirY * security)] == EMPTY)
		g->player.posY += g->player.dirY * move_speed;
}

void deal_key_down(t_g *g, double move_speed, double security)
{
	if (g->map.board[(int)(g->player.posX - g->player.dirX * security)][(int)g->player.posY] == EMPTY)
		g->player.posX -= g->player.dirX * move_speed;
	if (g->map.board[(int)g->player.posX][(int)(g->player.posY - g->player.dirY * security)] == EMPTY)
		g->player.posY -= g->player.dirY * move_speed;
}

int start_terminal_loop(t_g *g)
{
	double move_speed;
	double security;
	double rotspeed;

	move_speed = 0.05;
	security = 0.5;
	rotspeed = 0.05;

	print_in_terminal(g);

	char c;
	system("stty cbreak");
	while (read(0, &c, 1) > 0)
	{
		switch (c)
		{
		case 'a':
			deal_key_left(g, rotspeed);
			print_in_terminal(g);
			break;
		case 'd':
			deal_key_right(g, rotspeed);
			print_in_terminal(g);
			break;
		case 'w':
			deal_key_up(g, move_speed, security);
			print_in_terminal(g);
			break;
		case 's':
			deal_key_down(g, move_speed, security);
			print_in_terminal(g);
			break;
		default:
			break;
		}
	}

	return (0);
}

int main(int ac, char **av)
{
	t_g g;

	if (!ac)
		return (-1);

	initialize_global_struct(&g);

	if (!(open_and_parse_file(&g, av[1])))
		return (0);

	return (start_terminal_loop(&g));
}