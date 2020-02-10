#include "../includes/cub3d.h"

char *remove_spaces(char *s1)
{
    int x;
    int xx;
    int new_size;
    char *ret;

    x = 0;
    xx = 0;
    new_size = 0;
    while (s1[x])
    {
        if (s1[x] != ' ')
            new_size++;
        x++;
    }
    x = 0;
    ret = (char *)malloc((new_size + 1) * sizeof(char));
    if (!ret)
        return (NULL);
    //deal if NULL returned
    while (s1[x])
    {
        if (s1[x] != ' ')
        {
            ret[xx] = s1[x];
            xx++;
        }
        x++;
    }
    ret[xx] = '\0';
    return (ret);
}