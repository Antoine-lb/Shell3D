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
	size_t			count;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	count = 0;
	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1_tmp[count] == s2_tmp[count] &&
		count < n && s1_tmp[count] && s2_tmp[count])
		count++;
	if (count == n)
		count--;
	return (s1_tmp[count] - s2_tmp[count]);
}
