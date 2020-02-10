/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:36:25 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/11 15:43:47 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static void	*ft_bzero_ptr(void *b, size_t len)
{
	size_t			count;
	unsigned char	*res;

	count = 0;
	res = b;
	while (count < len)
	{
		res[count] = 0;
		count++;
	}
	return (void *)res;
}

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	return (ft_bzero_ptr(ptr, count * size));
}
