// #include <stdio.h>
// #include <string.h>
// #include "../ft_substr.c"

// int main()
// {
//     {
//         const char str[] = "123456789";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 3, 3);
//         printf("exp = 456\n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "123456789";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 3, 1);
//         printf("exp = 4\n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "123456789";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 0, 1);
//         printf("exp = 1\n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "123456789";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 0, 0);
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "123456789";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 333, 0);
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 0, 0);
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

//     {
//         const char str[] = "sss";
//         char *ft_dst;
//         ft_dst = ft_substr(str, 1, 1);
//         printf("exp = s\n");
//         printf("ft_ = %s\n\n", ft_dst);
//     }

// }

#include <stdlib.h>
#include <unistd.h>
#include "../ft_substr.c"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

    if (!(strsub = ft_substr(str, 0, 10)))
        ft_print_result("NULL");
    else
        ft_print_result(strsub);
    if (str == strsub)
        ft_print_result("\nA new string was not returned");
}