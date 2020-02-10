#include <stdio.h>
#include <ctype.h>
#include "../ft_isalnum.c"

int main()
{
    printf("%d %d\n", isalnum(3), ft_isalnum(3));
    printf("%d %d\n", isalnum(55), ft_isalnum(55));
    printf("%d %d\n", isalnum(56), ft_isalnum(56));
    printf("%d %d\n", isalnum(57), ft_isalnum(57));
    printf("%d %d\n", isalnum(58), ft_isalnum(58));
    printf("%d %d\n", isalnum(47), ft_isalnum(47));
    printf("%d %d\n", isalnum(48), ft_isalnum(48));
    printf("%d %d\n", isalnum(49), ft_isalnum(49));
    printf("%d %d\n", isalnum(54), ft_isalnum(54));

    printf("%d %d\n", isalnum(3), ft_isalnum(3));
    printf("%d %d\n", isalnum(0), ft_isalnum(0));
    printf("%d %d\n", isalnum(10), ft_isalnum(10));
    printf("%d %d\n", isalnum(100), ft_isalnum(100));
    printf("%d %d\n", isalnum(101), ft_isalnum(101));
    printf("%d %d\n", isalnum(150), ft_isalnum(150));
    printf("%d %d\n", isalnum(170), ft_isalnum(170));
    printf("%d %d\n", isalnum(171), ft_isalnum(171));
    printf("%d %d\n", isalnum(300), ft_isalnum(300));
    printf("%d %d\n", isalnum(64), ft_isalnum(64));
    printf("%d %d\n", isalnum(65), ft_isalnum(65));
    printf("%d %d\n", isalnum(70), ft_isalnum(70));
    printf("%d %d\n", isalnum(119), ft_isalnum(119));
    printf("%d %d\n", isalnum(120), ft_isalnum(120));
    printf("%d %d\n", isalnum(121), ft_isalnum(121));
    printf("%d %d\n", isalnum(122), ft_isalnum(122));
    printf("%d %d\n", isalnum(123), ft_isalnum(123));
    printf("%d %d\n", isalnum(189), ft_isalnum(189));

}