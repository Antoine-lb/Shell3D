#include <stdio.h>
#include "../ft_strjoin.c"

int main()
{
    {
        char *s1 = "asdf";
        char *s2 = "1234";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "asdf";
        char *s2 = "";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "";
        char *s2 = "";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "";
        char *s2 = "tttt";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "a";
        char *s2 = "tttt";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "a";
        char *s2 = "b";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "a";
        char *s2 = "bc";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }

    {
        char *s1 = "ab";
        char *s2 = "bc";
        printf("exp = %s%s\n", s1, s2);
        printf("ft_ = %s\n", ft_strjoin(s1, s2));
    }
}