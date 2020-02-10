#include <stdio.h>
#include <ctype.h>
#include "../ft_isdigit.c"

int main()
{
    printf("%d %d\n", isdigit(3), ft_isdigit(3));
    printf("%d %d\n", isdigit(55), ft_isdigit(55));
    printf("%d %d\n", isdigit(56), ft_isdigit(56));
    printf("%d %d\n", isdigit(57), ft_isdigit(57));
    printf("%d %d\n", isdigit(58), ft_isdigit(58));
    printf("%d %d\n", isdigit(47), ft_isdigit(47));
    printf("%d %d\n", isdigit(48), ft_isdigit(48));
    printf("%d %d\n", isdigit(49), ft_isdigit(49));
    printf("%d %d\n", isdigit(54), ft_isdigit(54));

}