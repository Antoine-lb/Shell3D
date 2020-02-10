#include <stdio.h>
#include <string.h>
#include "../ft_memcmp.c"

int main()
{
    {
        char    s1[] = "asdf";
        char    s2[] = "asdf";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "ardf";
        char    s2[] = "asdf";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "";
        char    s2[] = "";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "a";
        char    s2[] = "a";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "b";
        char    s2[] = "e";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "bdd";
        char    s2[] = "edd";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "asdfasdfasdfasdfasdfasdfasdasdfasdasdfasdfasdfasdfasdfasdf";
        char    s2[] = "asdfasdfasdfasdfasdfasdfasdasdfasdasdfasdfasdfasdfasdfasdf";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n\n", ft_memcmp(s1, s2, strlen(s1)));
    }

    {
        char    s1[] = "asdfasdfasdfasdfasdfasdfasdasdfasdasdfasdfasdfasdfasdfasdf";
        char    s2[] = "asdfasdfasdfasdfasdfasdfasdasdfasdasdfasdxasdfasdfasdfasdf";
        printf("%d\n", memcmp(s1, s2, strlen(s1)));
        printf("%d\n\n", ft_memcmp(s1, s2, strlen(s1)));
    }
}