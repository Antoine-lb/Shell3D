#include <stdio.h>
#include <string.h>
#include "../ft_strdup.c"

int main()
{
    const char str[] = "to dup";
    char *dst;
    char *ft_dst;
    dst = strdup(str);
    ft_dst = ft_strdup(str);
    printf("lib = %s\n", dst);
    printf("ft_ = %s\n\n", ft_dst);

    {
        const char str[] = "";
        char *dst;
        char *ft_dst;
        dst = strdup(str);
        ft_dst = ft_strdup(str);
        printf("lib = %s\n", dst);
        printf("ft_ = %s\n\n", ft_dst);
    }

    {
        const char str[] = "a";
        char *dst;
        char *ft_dst;
        dst = strdup(str);
        ft_dst = ft_strdup(str);
        printf("lib = %s\n", dst);
        printf("ft_ = %s\n\n", ft_dst);
    }

    {
        const char str[] = "\0";
        char *dst;
        char *ft_dst;
        dst = strdup(str);
        ft_dst = ft_strdup(str);
        printf("lib = %s\n", dst);
        printf("ft_ = %s\n\n", ft_dst);
    }
}