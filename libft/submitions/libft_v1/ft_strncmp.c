/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:52:37 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/14 10:53:14 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[count] && (unsigned char)s2[count] && count < n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (!s1[count] || !s2[count])
	{
		if ((unsigned char)s1[count] != (unsigned char)s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	}
	return (0);
}
