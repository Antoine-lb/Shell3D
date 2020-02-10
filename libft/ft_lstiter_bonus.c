/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:03:45 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/16 17:11:53 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*begin;

	begin = NULL;
	if (!lst || !f)
		return ;
	begin = lst;
	while (begin->next)
	{
		f(begin->content);
		begin = begin->next;
	}
	f(begin->content);
}
