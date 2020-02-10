#include <stdio.h>
#import "../libft.h"
#include "../ft_lstnew_bonus.c"


int	main()
{
	t_list	*new;

	new = ft_lstnew((void *)55);
	printf("%d", (int)new->content);
}