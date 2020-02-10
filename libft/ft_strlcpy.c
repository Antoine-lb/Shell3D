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
	size_t		i;
	size_t		n;
	char		*temp;

	if (!dst || !src)
		return (0);
	temp = dst;
	i = 0;
	n = ft_strlen(src);
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (n);
}
