/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:44:50 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/11 15:52:44 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*res;
	unsigned char	*src_ptr;

	res = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if (src > dst)
	{
		count = 0;
		while (count < len)
		{
			*(unsigned char *)(dst + count) = *(unsigned char *)(src + count);
			count++;
		}
	}
	else
	{
		count = len;
		while (len--)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		}
	}
	return (dst);
}
