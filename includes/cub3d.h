/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 08:34:35 by ale-baux          #+#    #+#             */
/*   Updated: 2019/12/18 08:34:40 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

#include "../libft/libft.h"

#define EMPTY 0
#define WALL 1

typedef struct s_img
{
    void *ptr;
    int *data;
    int size_l;
    int bpp;
    int endian;

    int width;
    int height;
} t_img;

typedef struct s_map
{
    int mapWidth;
    int mapHeight;

    int **board;
} t_map;

typedef struct s_screen
{
    int screenWidth;
    int screenHeight;
    double planeX;
    double planeY;
    char *currentScreen;
} t_screen;

typedef struct s_player
{
    double posX;
    double posY;
    double dirX;
    double dirY;
} t_player;

typedef struct s_texture
{
    char *textures[4];

    int floor_color;
    int ceiling_color;

    t_img texture_north;
    t_img texture_south;
    t_img texture_east;
    t_img texture_west;
} t_texture;

typedef struct g_s
{
    void *mlx_ptr;
    void *mlx_win;
    char key_presed[280];
    int side;
    int textured_floor_and_ceiling;

    t_map map;
    t_screen screen;
    t_player player;
    t_texture texture;

    t_img img; // mlx image 2D array

    // texture
    double perpWallDist;
    double rayDirX;
    double rayDirY;
    int lineHeight;

} t_g;

int get_next_line(int fd, char **line);

void get_screenshot(t_g *g, void (*draw_line)(t_g *, int, int, int));

int print_in_terminal(t_g *g);
void draw_line_terminal(t_g *g, int x, int drawStart, int drawEnd);

int open_and_parse_file(t_g *g, char *file);

// parsing
int is_line_valid(char *line);
char *remove_spaces(char *s1);
int parse_line_resolution(t_screen *screen, char *line);
int deal_error(char *err);
int allocate_map(t_map *map);
int parse_line_map(t_map *map, t_list *tmp_map, char *line);
int parse_line(t_g *g, t_list *tmp_map, char *line);
int put_map_line_in_struct(t_g *g, char *content, int x);
int parse_line_texture(t_texture *texture, char *line);
char *get_path(char *line, int start);
int parse_line_floor_and_ceiling(t_texture *texture, char *line);

void initialize_global_struct(t_g *g);

void get_screenshot(t_g *g, void (*draw_line)(t_g *, int, int, int));

#endif