// #include <stdio.h>
// #include "../ft_strtrim.c"

// int main()
// {
//     {
//         char *s1 = "12asdf33";
//         char *set = "1234";
//         printf("exp = asdf\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "12asdf33";
//         char *set = "";
//         printf("exp = 12asdf33\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "";
//         char *set = "1234";
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "123asdf33";
//         char *set = "3";
//         printf("exp = 123asdf\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "aaaasdf33bbbb";
//         char *set = "ab";
//         printf("exp = sdf33\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "aaaa";
//         char *set = "ab";
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "hello";
//         char *set = "ab";
//         printf("exp = hello\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "xgggggggg";
//         char *set = "ab";
//         printf("exp = xgggggggg\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "121212121212";
//         char *set = "12";
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "a";
//         char *set = "ab";
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "ab";
//         char *set = "ab";
//         printf("exp = \n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "x";
//         char *set = "ab";
//         printf("exp = x\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "xs";
//         char *set = "ab";
//         printf("exp = xs\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "xs";
//         char *set = "abs";
//         printf("exp = x\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = "sxs";
//         char *set = "abs";
//         printf("exp = x\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = NULL;
//         char *set = "abs";
//         printf("exp = (null)\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }

//     {
//         char *s1 = NULL;
//         char *set = NULL;
//         printf("exp = x\n");
//         printf("ft_ = %s\n\n", ft_strtrim(s1, set));
//     }
// }

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "../ft_strtrim.c"


void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main()
{
	char	*strtrim;

	// char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char s1[] = "          ";
	if (!(strtrim = ft_strtrim(s1, " ")))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
}