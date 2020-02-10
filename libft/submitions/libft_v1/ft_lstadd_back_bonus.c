/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:43:33 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/16 14:43:34 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	begin = NULL;
	if (!new)
		return ;
	if (!alst || !(*alst))
	{
		*alst = new;
		new->next = NULL;
		return ;
	}
	begin = *alst;
	while (begin->next)
		begin = begin->next;
	begin->next = new;
	new->next = NULL;
}
