/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:55:27 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/17 09:35:57 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == c)
		{
			return ((char *)(s + count));
		}
		count++;
	}
	if (c == '\0')
		return ((char *)(s + count));
	return (NULL);
}
