#include <stdio.h>
#include <ctype.h>
#include "../ft_isprint.c"

int main()
{
    printf("%d %d\n", isprint(3), ft_isprint(3));
    printf("%d %d\n", isprint(55), ft_isprint(55));
    printf("%d %d\n", isprint(56), ft_isprint(56));
    printf("%d %d\n", isprint(57), ft_isprint(57));
    printf("%d %d\n", isprint(58), ft_isprint(58));
    printf("%d %d\n", isprint(47), ft_isprint(47));
    printf("%d %d\n", isprint(48), ft_isprint(48));
    printf("%d %d\n", isprint(49), ft_isprint(49));
    printf("%d %d\n", isprint(54), ft_isprint(54));

    printf("%d %d\n", isprint(3), ft_isprint(3));
    printf("%d %d\n", isprint(0), ft_isprint(0));
    printf("%d %d\n", isprint(10), ft_isprint(10));
    printf("%d %d\n", isprint(100), ft_isprint(100));
    printf("%d %d\n", isprint(101), ft_isprint(101));
    printf("%d %d\n", isprint(150), ft_isprint(150));
    printf("%d %d\n", isprint(170), ft_isprint(170));
    printf("%d %d\n", isprint(171), ft_isprint(171));
    printf("%d %d\n", isprint(300), ft_isprint(300));
    printf("%d %d\n", isprint(64), ft_isprint(64));
    printf("%d %d\n", isprint(65), ft_isprint(65));
    printf("%d %d\n", isprint(70), ft_isprint(70));
    printf("%d %d\n", isprint(119), ft_isprint(119));
    printf("%d %d\n", isprint(120), ft_isprint(120));
    printf("%d %d\n", isprint(121), ft_isprint(121));
    printf("%d %d\n", isprint(122), ft_isprint(122));
    printf("%d %d\n", isprint(123), ft_isprint(123));
    printf("%d %d\n", isprint(189), ft_isprint(189));
    printf("%d %d\n", isprint(-50), ft_isprint(-50));
    printf("%d %d\n", isprint(-0), ft_isprint(-0));

    printf("%d %d\n", isprint(30), ft_isprint(30));
    printf("%d %d\n", isprint(31), ft_isprint(31));
    printf("%d %d\n", isprint(32), ft_isprint(32));
    printf("%d %d\n", isprint(33), ft_isprint(33));
    printf("%d %d\n", isprint(34), ft_isprint(34));

    printf("%d %d\n", isprint(124), ft_isprint(124));
    printf("%d %d\n", isprint(125), ft_isprint(125));
    printf("%d %d\n", isprint(126), ft_isprint(126));
    printf("%d %d\n", isprint(127), ft_isprint(127));
}