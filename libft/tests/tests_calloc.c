#include <stdio.h>
#include <stdlib.h>
#include "../ft_calloc.c"

int main()
{
    int *res = calloc(5, 9);
    res[1] = 5;
    int *ft_res = ft_calloc(5, 9);
    ft_res[1] = 5;
}