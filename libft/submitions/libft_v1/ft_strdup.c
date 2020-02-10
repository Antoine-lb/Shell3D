/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:54:19 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/11 15:54:45 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	str_size;
	char	*res;

	if (!s1)
		return (NULL);
	i = 0;
	str_size = ft_strlen(s1);
	res = (char *)malloc(str_size * sizeof(char) + 1);
	if (!res)
		return (NULL);
	while (i < str_size)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
