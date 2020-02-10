/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:58:36 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/10 18:00:28 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	int	count;

	count = (int)ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == c)
		{
			return ((char *)(s + count));
		}
		count--;
	}
	return (NULL);
}
