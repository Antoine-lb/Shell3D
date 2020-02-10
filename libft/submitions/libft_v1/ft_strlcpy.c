/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:42:12 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:43:11 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	src_count;

	if (!dst || !src)
		return (0);
	count = 0;
	src_count = 0;
	if (!src[0])
	{
		dst[0] = '\0';
		return (src_count);
	}
	while (src[src_count])
		src_count++;
	if (dstsize == 0)
		return (src_count);
	while (src[count] && count < (dstsize - 1))
	{
		dst[count] = src[count];
		count++;
	}
	while (count < (dstsize - 1))
		dst[count++] = '\0';
	dst[dstsize - 1] = '\0';
	return (src_count);
}
