/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:04:37 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/08 17:11:03 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

char					*ft_strnstr(const char *haystack,
						const char *needle, size_t len)
{
	size_t				count;
	size_t				tmp_count;
	size_t				needle_count;

	count = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)&haystack[0]);
	while (haystack[count] && count < len)
	{
		if (haystack[count] == needle[0] || needle[0] == '\0')
		{
			needle_count = 0;
			tmp_count = count;
			while (haystack[tmp_count] && needle[needle_count]
					&& tmp_count < len
					&& haystack[tmp_count++] == needle[needle_count])
				needle_count++;
			if (!needle[needle_count])
				return ((char *)&haystack[count]);
		}
		count++;
	}
	return (NULL);
}
