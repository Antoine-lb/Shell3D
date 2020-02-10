/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:51:32 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/08 17:52:12 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		return (count);
	while (s[count] != '\0')
		count++;
	return (count);
}
