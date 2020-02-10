/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:47:15 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/08 17:50:01 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

size_t					ft_strlcat(char *dst,
						const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizedst;

	if (!dst || !src)
		return ((size_t)NULL);
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	sizedst = i;
	while (src[i - sizedst] && i < dstsize - 1)
	{
		dst[i] = src[i - sizedst];
		i++;
	}
	if (sizedst < dstsize)
		dst[i] = '\0';
	return (sizedst + ft_strlen(src));
}
