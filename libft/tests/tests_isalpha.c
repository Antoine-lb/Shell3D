#include <stdio.h>
#include <ctype.h>
#include "../ft_isalpha.c"

int main()
{
    printf("%d %d\n", isalpha(3), ft_isalpha(3));
    printf("%d %d\n", isalpha(0), ft_isalpha(0));
    printf("%d %d\n", isalpha(10), ft_isalpha(10));
    printf("%d %d\n", isalpha(100), ft_isalpha(100));
    printf("%d %d\n", isalpha(101), ft_isalpha(101));
    printf("%d %d\n", isalpha(150), ft_isalpha(150));
    printf("%d %d\n", isalpha(170), ft_isalpha(170));
    printf("%d %d\n", isalpha(171), ft_isalpha(171));
    printf("%d %d\n", isalpha(300), ft_isalpha(300));
    printf("%d %d\n", isalpha(64), ft_isalpha(64));
    printf("%d %d\n", isalpha(65), ft_isalpha(65));
    printf("%d %d\n", isalpha(70), ft_isalpha(70));
    printf("%d %d\n", isalpha(119), ft_isalpha(119));
    printf("%d %d\n", isalpha(120), ft_isalpha(120));
    printf("%d %d\n", isalpha(121), ft_isalpha(121));
    printf("%d %d\n", isalpha(122), ft_isalpha(122));
    printf("%d %d\n", isalpha(123), ft_isalpha(123));
    printf("%d %d\n", isalpha(189), ft_isalpha(189));
}