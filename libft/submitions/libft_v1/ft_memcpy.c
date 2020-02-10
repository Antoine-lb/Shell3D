/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:44:16 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:45:26 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*res;
	unsigned char	*src_ptr;

	count = 0;
	res = dst;
	src_ptr = (unsigned char *)src;
	while (count < n)
	{
		res[count] = src_ptr[count];
		count++;
	}
	return (void *)res;
}
