/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:09:23 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/15 15:12:34 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static int	num_size(int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*min_int_edge_case(void)
{
	char	*min_int;
	int		i;
	char	*res;

	min_int = "-2147483648";
	i = 0;
	res = (char *)malloc(12 * sizeof(char));
	if (!res)
		return (NULL);
	while (i < 12)
	{
		res[i] = min_int[i];
		i++;
	}
	return (res);
}

static void	if_negative_pass_to_flag(int *n, int *negative_flag)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*negative_flag = 1;
	}
}

char		*ft_itoa(int n)
{
	int		negative_flag;
	int		str_size;
	char	*res;

	if (n == -2147483648)
		return (min_int_edge_case());
	negative_flag = 0;
	if_negative_pass_to_flag(&n, &negative_flag);
	str_size = num_size(n);
	res = (char *)malloc((str_size + negative_flag + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (!negative_flag)
		str_size--;
	res[str_size + 1] = '\0';
	while (n >= 10)
	{
		res[str_size--] = (n % 10) + '0';
		n = n / 10;
	}
	res[str_size] = n + '0';
	if (negative_flag)
		res[0] = '-';
	return (res);
}
