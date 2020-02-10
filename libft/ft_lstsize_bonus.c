/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:11:13 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/16 14:38:14 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (!lst)
		return (0);
	tmp = lst->next;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (++count);
}
