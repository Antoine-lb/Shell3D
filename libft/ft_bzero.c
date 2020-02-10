/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:42:12 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 17:43:11 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

void	ft_bzero(void *b, size_t len)
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
}
