#include "../includes/cub3d.h"

int parse_line_map(t_map *map, t_list *tmp_map, char *line)
{
    char *str_trimed;
    t_list *new_element;

    if (map->mapWidth == 0)
    {
        str_trimed = remove_spaces(line);
        map->mapWidth = ft_strlen(str_trimed);
    }
    str_trimed = remove_spaces(line);
    if (map->mapWidth == (int)ft_strlen(str_trimed))
    {
        if (is_line_valid(str_trimed))
        {
            new_element = malloc(sizeof(t_list) * 1);
            new_element->content = str_trimed;
            map->mapHeight++;
            ft_lstadd_back(&tmp_map, new_element);
        }
        else
        {
            free(str_trimed);
            return (deal_error("Invalid Map Character"));
        }
    }
    else
        return (deal_error("Invalid Map Lenght"));
    return (1);
}