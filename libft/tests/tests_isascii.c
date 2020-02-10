#include <stdio.h>
#include <ctype.h>
#include "../ft_isascii.c"

int main()
{
    printf("%d %d\n", isascii(3), ft_isascii(3));
    printf("%d %d\n", isascii(55), ft_isascii(55));
    printf("%d %d\n", isascii(56), ft_isascii(56));
    printf("%d %d\n", isascii(57), ft_isascii(57));
    printf("%d %d\n", isascii(58), ft_isascii(58));
    printf("%d %d\n", isascii(47), ft_isascii(47));
    printf("%d %d\n", isascii(48), ft_isascii(48));
    printf("%d %d\n", isascii(49), ft_isascii(49));
    printf("%d %d\n", isascii(54), ft_isascii(54));

    printf("%d %d\n", isascii(3), ft_isascii(3));
    printf("%d %d\n", isascii(0), ft_isascii(0));
    printf("%d %d\n", isascii(10), ft_isascii(10));
    printf("%d %d\n", isascii(100), ft_isascii(100));
    printf("%d %d\n", isascii(101), ft_isascii(101));
    printf("%d %d\n", isascii(150), ft_isascii(150));
    printf("%d %d\n", isascii(170), ft_isascii(170));
    printf("%d %d\n", isascii(171), ft_isascii(171));
    printf("%d %d\n", isascii(300), ft_isascii(300));
    printf("%d %d\n", isascii(64), ft_isascii(64));
    printf("%d %d\n", isascii(65), ft_isascii(65));
    printf("%d %d\n", isascii(70), ft_isascii(70));
    printf("%d %d\n", isascii(119), ft_isascii(119));
    printf("%d %d\n", isascii(120), ft_isascii(120));
    printf("%d %d\n", isascii(121), ft_isascii(121));
    printf("%d %d\n", isascii(122), ft_isascii(122));
    printf("%d %d\n", isascii(123), ft_isascii(123));
    printf("%d %d\n", isascii(189), ft_isascii(189));
    printf("%d %d\n", isascii(-50), ft_isascii(-50));
    printf("%d %d\n", isascii(-0), ft_isascii(-0));

}