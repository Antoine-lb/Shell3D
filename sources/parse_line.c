#include "../includes/cub3d.h"

int parse_line(t_g *g, t_list *tmp_map, char *line)
{
    int str_len;
    str_len = ft_strlen(line);
    int res;

    if (line[0] == '1')
    {
        res = parse_line_map(&g->map, tmp_map, line);
        if (res == 0)
            return (deal_error("Map line not valid"));
    }
    else if (line[0] == 'R')
    {
        res = parse_line_resolution(&g->screen, line);
        if (res == 0)
            return (deal_error("Resolution not valid"));
    }
    else if (
        (line[0] == 'N' && line[1] == 'O') ||
        (line[0] == 'S' && line[1] == 'O') ||
        (line[0] == 'E' && line[1] == 'A') ||
        (line[0] == 'W' && line[1] == 'E'))
    {
        res = parse_line_texture(&g->texture, line);
        if (res == 0)
            return (deal_error("Textures not valid"));
    }
    else if (line[0] == 'F' || line[0] == 'C')
    {
        res = parse_line_floor_and_ceiling(&g->texture, line);
        if (res == 0)
            return (deal_error("Floor and/or Ceiling not valid"));
    }
    return (1);
}