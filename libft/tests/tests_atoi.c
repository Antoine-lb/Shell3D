#include <stdio.h>
#include <stdlib.h>
#include "../ft_atoi.c"

int main()
{
    // printf("lib = %d\ncus = %d\n\n", atoi("1"), ft_atoi("1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-1"), ft_atoi("-1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("--1"), ft_atoi("--1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("+1"), ft_atoi("+1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("++1"), ft_atoi("++1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("+-1"), ft_atoi("+-1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-+1"), ft_atoi("-+1"));
    // printf("lib = %d\ncus = %d\n\n", atoi("55"), ft_atoi("55"));
    // printf("lib = %d\ncus = %d\n\n", atoi("0"), ft_atoi("0"));

    // printf("lib = %d\ncus = %d\n\n", atoi("0000"), ft_atoi("0000"));
    // printf("lib = %d\ncus = %d\n\n", atoi("00001"), ft_atoi("00001"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-00001"), ft_atoi("-00001"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-000019999"), ft_atoi("-000019999"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-2 147 483 648"), ft_atoi("-2 147 483 648"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-2147483648"), ft_atoi("-2147483648"));
    // printf("lib = %d\ncus = %d\n\n", atoi("2147483648"), ft_atoi("2147483648"));
    // printf("lib = %d\ncus = %d\n\n", atoi("2147483647"), ft_atoi("2147483647"));
    // printf("lib = %d\ncus = %d\n\n", atoi("214748b3647"), ft_atoi("214748b3647"));
    // printf("lib = %d\ncus = %d\n\n", atoi("\n\n\n  -46\b9 \n5d6"), ft_atoi("\n\n\n  -46\b9 \n5d6"));
    // printf("lib = %d\ncus = %d\n\n", atoi("\t\n\r\v\f  469 \n"), ft_atoi("\t\n\r\v\f  469 \n"));
    // printf("lib = %d\ncus = %d\n\n", atoi("--2147483648"), ft_atoi("--2147483648"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-2147483648"), ft_atoi("-2147483648"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-21474836484"), ft_atoi("-21474836484"));
    // printf("lib = %d\ncus = %d\n\n", atoi("-92233720368547758073"), ft_atoi("-92233720368547758073"));
    printf("lib = %d\ncus = %d\n\n", atoi("-99999999999999999999999999"), ft_atoi("-99999999999999999999999999"));

}

// #include <stdlib.h>
// #include <unistd.h>
// #include "../ft_atoi.c"

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main()
// {
//     ft_print_result(ft_itoa(0));
//     ft_itoa(0);
// }