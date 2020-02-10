#include <stdio.h>
#include <string.h>
#include "../ft_memcpy.c"

int main()
{
    char    src[] = "asdf";
    char    dst[10];
    char    ft_dst[10];
    printf("%s\n", memcpy(dst, src, 5*(sizeof(char))));
    printf("%s\n", ft_memcpy(ft_dst, src, 5*(sizeof(char))));

    {
        char    src[] = "1";
        char    dst[10];
        char    ft_dst[10];
        printf("%s\n", memcpy(dst, src, 5*(sizeof(char))));
        printf("%s\n", ft_memcpy(ft_dst, src, 5*(sizeof(char))));
    }

    {
        char    src[] = "";
        char    dst[10];
        char    ft_dst[10];
        printf("%s\n", memcpy(dst, src, 5*(sizeof(char))));
        printf("%s\n", ft_memcpy(ft_dst, src, 5*(sizeof(char))));
    }

    {
        char    src[] = "";
        char    dst[1];
        char    ft_dst[1];
        printf("%s\n", memcpy(dst, src, 1*(sizeof(char))));
        printf("%s\n", ft_memcpy(ft_dst, src, 1*(sizeof(char))));
    }

    {
        char    src[] = "d";
        char    dst[2];
        char    ft_dst[2];
        printf("%s\n", memcpy(dst, src, 2*(sizeof(char))));
        printf("%s\n", ft_memcpy(ft_dst, src, 2*(sizeof(char))));
    }

    {
        char    src[] = "M";
        char    dst[2];
        char    ft_dst[2];
        printf("%s\n", memcpy(dst, src, 2*(sizeof(char))));
        printf("%s\n", ft_memcpy(ft_dst, src, 2*(sizeof(char))));
    }
}