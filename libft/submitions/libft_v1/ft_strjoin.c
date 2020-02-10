/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:57:22 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/11 16:02:47 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	size_t	s1_len;
	size_t	s2_len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(res = (char *)malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (NULL);
	while (i < s1_len)
	{
		res[i] = s1[i];
		i++;
	}
	ii = 0;
	while (ii < s2_len)
	{
		res[i++] = s2[ii++];
	}
	res[i] = '\0';
	return (res);
}
