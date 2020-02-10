#include "../cub3d.h"

int deal_error(char *err)
{
    printf("Error\n");
    printf("%s\n", err);

    return (0);
}

int get_sprites(t_sprites *sprites, char *content, int x, int *sprite_num)
{
    int y = 0;
    if (content != NULL)
    {
        while (content[y])
        {
            if (content[y] == '2')
            {
                sprites->sprites[*sprite_num][0] = (float)x + 0.5;
                sprites->sprites[*sprite_num][1] = (float)y + 0.5;
                sprites->spriteOrder[*sprite_num] = *sprite_num;
                *sprite_num = *sprite_num + 1;
            }
            y++;
        }
        y = 0;
    }
    return (1);
}

int convert_chaned_list_map_to_2d_array(t_g *g, t_list *tmp_map)
{
    t_list *begin;
    begin = NULL;
    begin = tmp_map;
    int x = 0;
    int sprites_num = 0;

    while (begin->next)
    {
        put_map_line_in_struct(g, begin->content, x, &sprites_num);
        if (begin->content != NULL)
            x++;
        begin = begin->next;
    }
    put_map_line_in_struct(g, begin->content, x, &sprites_num);

    x = 0;
    g->sprite.numSprites = sprites_num;
    g->sprite.sprites = (float **)malloc(sprites_num * (sizeof(float *)));
    // protect
    g->sprite.spriteOrder = (int*)malloc(sprites_num * (sizeof(int)));
    while (x < sprites_num)
    {
        g->sprite.sprites[x] = (float *)malloc(3 * (sizeof(float)));
        g->sprite.sprites[x][0] = 0.0;
        g->sprite.sprites[x][1] = 0.0;
        g->sprite.sprites[x][2] = 0.0;
        x++;
    }

    x = 0;
    sprites_num = 0;
    begin = tmp_map;
    while (begin->next)
    {
        get_sprites(&g->sprite, begin->content, x, &sprites_num);
        if (begin->content != NULL)
            x++;
        begin = begin->next;
    }

    return (1);
}

void    free_all(t_g *g)
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
    while (parse_result && ((ret = get_next_line(fd, &line)) > 0))
    {
        parse_result = parse_line(g, &tmp_map, line);
        free(line);
    }
    if (parse_result)
    {
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
    
    g->sprite.ZBuffer = (double *)malloc((g->screen.screenWidth) * sizeof(double));
    if (!g->sprite.ZBuffer)
        return (0); // free everything

    if (!convert_chaned_list_map_to_2d_array(g, &tmp_map))
        return (0); // free everything

    return (1);
}
