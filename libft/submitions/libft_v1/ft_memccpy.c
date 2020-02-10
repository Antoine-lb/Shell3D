/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:46:29 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:47:11 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*res;
	unsigned char	*src_ptr;

	count = 0;
	res = dst;
	src_ptr = (unsigned char *)src;
	if (!n)
		return (NULL);
	while (count < n && src_ptr[count] != (unsigned char)c)
	{
		res[count] = src_ptr[count];
		count++;
	}
	if (src_ptr[count] == (unsigned char)c)
	{
		res[count] = src_ptr[count];
		count++;
	}
	if (count == n && src_ptr[count - 1] != (unsigned char)c)
		return (NULL);
	return (void *)(res + count);
}
