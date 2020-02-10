/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:39:56 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:40:49 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*res;

	count = 0;
	res = (unsigned char *)b;
	while (count < len)
	{
		res[count] = (unsigned char)c;
		count++;
	}
	return ((void *)res);
}
