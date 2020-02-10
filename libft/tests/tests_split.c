// #include <stdio.h>
// #include "../ft_split.c"

// void	print_double_arr(char **arr)
// {
// 	int i;

// 	i = 0;
// 	if (arr[i] == 0)
// 	{
// 		printf("empty arr\n");
// 	}
// 	while (arr[i] != 0)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }

// void	test(char *str, char charset)
// {
// 	char **result = ft_split(str, charset);
// 	print_double_arr(result);
// }

// int	main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		test(av[1], 'c');
// 	}
// }


#include <stdlib.h>
#include <unistd.h>
#include "../ft_split.c"

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
	char	**tabstr;
	int		i;

	i = 0;
	// if (!(tabstr = ft_split("          ", ' ')))
	// 	ft_print_result("NULL");
	// else
	// {
	// 	while (tabstr[i] != '\0')
	// 	{
	// 		ft_print_result(tabstr[i]);
	// 		write(1, "\n", 1);
	// 		i++;
	// 	}
	// }

	// if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
	if (!(tabstr = ft_split("lorem", ' ')))
		ft_print_result("NULL");
	else
	{
		while (tabstr[i] != '\0')
		{
			// ft_print_result(tabstr[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	// ft_split("lorem", ' ');
}