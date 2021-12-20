#include "../includes/cub3d.h"

int deal_error(char *err)
{
    printf("Error\n");
    printf("%s\n", err);

    return (0);
}

int convert_chaned_list_map_to_2d_array(t_g *g, t_list *tmp_map)
{
    t_list *begin;
    begin = NULL;
    begin = tmp_map;
    int x = 0;

    while (begin->next)
    {
        put_map_line_in_struct(g, begin->content, x);
        if (begin->content != NULL)
            x++;
        begin = begin->next;
    }
    put_map_line_in_struct(g, begin->content, x);
    return (1);
}

void free_all(t_g *g)
{
}

int open_and_parse_file(t_g *g, char *file)
{
    t_list tmp_map;
    int fd;
    int ret;
    char *line;
    int parse_result;

    tmp_map.content = NULL;
    tmp_map.next = NULL;

    parse_result = 1;

    fd = open(file, O_RDONLY);
    printf("toto %s\n", "asdf");

    while (parse_result && ((ret = get_next_line(fd, &line)) > 0))
    {
        printf("toto %s\n", line);
        parse_result = parse_line(g, &tmp_map, line);
        free(line);
    }
    if (parse_result)
    {
        printf("%s\n", line);
        parse_result = parse_line(g, &tmp_map, line);
        free(line);
    }
    else
    {
        printf("free all\n");
        return (0);
    }

    if (!allocate_map(&g->map))
        return (0); // free everything

    if (!convert_chaned_list_map_to_2d_array(g, &tmp_map))
        return (0); // free everything

    return (1);
}
