/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:31:49 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/15 10:42:30 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static void		*free_all(char **arr, int index)
{
	while (index)
	{
		free(arr[index]);
		index--;
	}
	free(arr);
	return (NULL);
}

static int		is_beginning_of_chunk(char *str, int index, char charset)
{
	if (index == 0 && str[0] != charset)
	{
		return (1);
	}
	else if (index != 0
			&& str[index - 1] == charset
			&& str[index] != charset)
	{
		return (1);
	}
	return (0);
}

static int		count_chunks(char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_beginning_of_chunk(str, i, charset))
			count++;
		i++;
	}
	return (count);
}

static char		**allocate_memory(char *str, char charset, int chunk_amount)
{
	char	**arr;
	int		nasty[3];

	if (!(arr = (char**)malloc(sizeof(char*) * (chunk_amount + 1))))
		return (NULL);
	nasty[0] = 0;
	nasty[1] = 0;
	arr[chunk_amount] = 0;
	if (chunk_amount == 0)
		return (arr);
	while (str[nasty[0]])
	{
		if (is_beginning_of_chunk(str, nasty[0], charset))
		{
			nasty[2] = 0;
			while (str[nasty[0]] && str[nasty[0]++] != charset)
				nasty[2]++;
			if (!(arr[nasty[1]] = (char*)malloc(sizeof(char) * (nasty[2] + 1))))
				return (free_all(arr, nasty[1]));
			nasty[1]++;
		}
		else
			nasty[0]++;
	}
	return (arr);
}

char			**ft_split(char *str, char charset)
{
	char	**arr;
	int		nasty[4];

	if (!str)
		return (NULL);
	nasty[3] = count_chunks(str, charset);
	if (!(arr = allocate_memory(str, charset, nasty[3])))
		return (NULL);
	nasty[0] = 0;
	nasty[1] = 0;
	nasty[2] = 0;
	while (str[nasty[0]])
	{
		if (is_beginning_of_chunk(str, nasty[0], charset))
		{
			while (str[nasty[0]] && str[nasty[0]] != charset)
				arr[nasty[2]][nasty[1]++] = str[nasty[0]++];
			arr[nasty[2]][nasty[1]] = '\0';
			nasty[1] = 0;
			nasty[2]++;
		}
		else
			nasty[0]++;
	}
	return (arr);
}
