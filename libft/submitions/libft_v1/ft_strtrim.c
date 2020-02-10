/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:31:55 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/15 15:57:39 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static int		is_in_charset(char c, char const *set)
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(set);
	while (i < size)
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

static int		get_start(char const *s1, char const *set)
{
	int		i;

	i = 0;
	while (is_in_charset(s1[i], set) && s1[i])
		i++;
	if (!s1[i])
		return (0);
	return (i);
}

static int		get_end(char const *s1, char const *set)
{
	int		len;

	len = ft_strlen(s1) - 1;
	while (len >= 0 && is_in_charset(s1[len], set))
		len--;
	return (len);
}

static char		*return_pointer_to_null(void)
{
	char	*res;

	res = (char *)malloc(1 * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		total_size;
	int		start_index;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start_index = get_start(s1, set);
	if (get_end(s1, set) == -1)
		return (return_pointer_to_null());
	total_size = (get_end(s1, set) - start_index) + 1;
	res = (char *)malloc((total_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		res[i] = s1[start_index + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
