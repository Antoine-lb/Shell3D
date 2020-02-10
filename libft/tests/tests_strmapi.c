#include <stdio.h>
#include "../ft_strmapi.c"

char	callback(unsigned index, char c)
{
	if (c == 'e')
	{
		return ('c');
	}
	return (c);
}

int main()
{
	char	*str = "hello";
	char (*ptr)(unsigned int, char) = &callback;
	printf("exp = hcllo\nft_ = %s\n\n", ft_strmapi(str, ptr));

	{
		char	*str = "";
		char (*ptr)(unsigned int, char) = &callback;
		printf("exp = \nft_ = %s\n\n", ft_strmapi(str, ptr));
	}

	{
		char	*str = "a";
		char (*ptr)(unsigned int, char) = &callback;
		printf("exp = a\nft_ = %s\n\n", ft_strmapi(str, ptr));
	}

	{
		char	*str = "e";
		char (*ptr)(unsigned int, char) = &callback;
		printf("exp = c\nft_ = %s\n\n", ft_strmapi(str, ptr));
	}
}
