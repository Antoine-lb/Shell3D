/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:49:04 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:49:51 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_ptr;

	i = 0;
	src_ptr = (unsigned char *)s;
	while (i < n)
	{
		if (src_ptr[i] == (unsigned char)c)
			return ((void *)(src_ptr + i));
		i++;
	}
	return (NULL);
}
