/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:40:23 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/14 12:05:11 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static int	is_white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
			|| c == '\r' || c == '\v' || c == '\f')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	long int	i;
	int			total;
	int			negative_flag;

	i = 0;
	total = 0;
	negative_flag = 0;
	if (!str)
		return ((int)NULL);
	while (str[i] && is_white_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_flag = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	if (negative_flag)
		total = total * -1;
	return (total);
}
