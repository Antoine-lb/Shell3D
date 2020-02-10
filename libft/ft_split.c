/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmaokham <vmaokham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:37:03 by vmaokham          #+#    #+#             */
/*   Updated: 2020/01/13 16:18:38 by vmaokham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_put_car(char *new_str, char *str, char *charset, int *i)
{
	int		j;

	j = 0;
	while (ft_is_sep(str[*i], charset) == 1)
		*i = *i + 1;
	while (ft_is_sep(str[*i], charset) == 0 && str[*i] != '\0')
	{
		new_str[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	new_str[j] = '\0';
	return ;
}

int		ft_len_words(char *str, char *charset, int *i)
{
	int		len;

	len = 0;
	while (ft_is_sep(str[*i], charset) == 1)
	{
		*i = *i + 1;
	}
	while (ft_is_sep(str[*i], charset) == 0 && str[*i] != '\0')
	{
		len++;
		*i = *i + 1;
	}
	return (len);
}

int		ft_count_words(char *str, char *charset, int words)
{
	int		i;
	int		j;

	i = -1;
	while (str[++i] != '\0')
	{
		if (ft_is_sep(str[i], charset) == 1)
		{
			j = i;
			while (j > 0)
			{
				if (ft_is_sep(str[j - 1], charset) == 1)
					break ;
				else if (ft_is_sep(str[j - 1], charset) == 0)
				{
					words++;
					break ;
				}
			}
		}
	}
	if ((ft_is_sep(str[i - 1], charset) == 0) && (str[i] == '\0') && (i != 0))
		words++;
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**new_str;
	int		i;
	int		words;
	int		len_words;
	int		pos;

	new_str = NULL;
	words = 0;
	words = ft_count_words(str, charset, words);
	if (!(new_str = malloc(sizeof(char*) * (words + 1))))
		return (0);
	i = -1;
	pos = 0;
	while (++i < words)
	{
		len_words = ft_len_words(str, charset, &pos);
		if (!(new_str[i] = malloc(sizeof(char) * (len_words + 1))))
			return (0);
	}
	i = -1;
	pos = 0;
	while (++i < words)
		ft_put_car(new_str[i], str, charset, &pos);
	new_str[i] = 0;
	return (new_str);
}