#include <stdio.h>
#include <string.h>
#include "../ft_memchr.c"

int main()
{
    char    str[] = "asdf";
    printf("lib = %s\n", memchr(str, 'd', 5));
    printf("ft_ = %s\n\n", ft_memchr(str, 'd', 5));

    {
        char    str[] = "asxf";
        printf("lib = %s\n", memchr(str, 'd', 5));
        printf("ft_ = %s\n\n", ft_memchr(str, 'd', 5));
    }

    {
        char    str[] = "";
        printf("lib = %s\n", memchr(str, 'd', 5));
        printf("ft_ = %s\n\n", ft_memchr(str, 'd', 5));
    }

    {
        char    str[] = "";
        printf("lib = %s\n", memchr(str, 'd', 0));
        printf("ft_ = %s\n\n", ft_memchr(str, 'd', 0));
    }

    {
        char    str[] = "a";
        printf("lib = %s\n", memchr(str, 'd', 0));
        printf("ft_ = %s\n\n", ft_memchr(str, 'd', 0));
    }

    {
        char    str[] = "aaaaaa";
        printf("lib = %s\n", memchr(str, 'a', 0));
        printf("ft_ = %s\n\n", ft_memchr(str, 'a', 0));
    }

    {
        char    str[] = "aaaaaa";
        printf("lib = %s\n", memchr(str, 'a', 1));
        printf("ft_ = %s\n\n", ft_memchr(str, 'a', 1));
    }

    {
        char    str[] = "aaaaaa";
        printf("lib = %s\n", memchr(str, 'a', 3));
        printf("ft_ = %s\n\n", ft_memchr(str, 'a', 3));
    }

    {
        char    str[] = "aaaaaa";
        printf("lib = %s\n", memchr(str, 44, 1));
        printf("ft_ = %s\n\n", ft_memchr(str, 44, 1));
    }

    {
        char    str[] = "bonjourno";
        printf("lib = %s\n", memchr(str, 'n', 2));
        printf("ft_ = %s\n\n", ft_memchr(str, 'n', 2));
    }
}