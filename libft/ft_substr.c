/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:07:39 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/14 12:08:50 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*res;

	if (!s)
		return (NULL);
	count = 0;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (start > ft_strlen(s))
	{
		res[0] = '\0';
		return (res);
	}
	while (len)
	{
		res[count] = s[start];
		start++;
		count++;
		len--;
	}
	res[count] = '\0';
	return (res);
}
