/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:40:23 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/18 13:38:31 by ale-baux         ###   ########.fr       */
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

static void	deal_with_negative(const char *str, int *i, int *negative_flag)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*negative_flag = 1;
		*i = *i + 1;
	}
}

int			ft_atoi(const char *str)
{
	int			i;
	int			negative_flag;
	long		total;

	i = 0;
	total = 0;
	negative_flag = 0;
	if (!str)
		return (0);
	while (str[i] && is_white_space(str[i]))
		i++;
	deal_with_negative(str, &i, &negative_flag);
	while (ft_isdigit(str[i]))
	{
		total = (total * 10) + (str[i] - '0');
		if (total < 0 && negative_flag)
			return (0);
		if (total < 0 && !negative_flag)
			return (-1);
		i++;
	}
	if (negative_flag)
		total = total * -1;
	return (total);
}
