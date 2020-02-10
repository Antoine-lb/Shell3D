/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:12:48 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/16 17:48:28 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew2(void *content)
{
	t_list	*dest;

	if (!(dest = malloc(sizeof(t_list *))))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}

static void		ft_lstadd_back2(t_list **alst, t_list *new)
{
	t_list	*begin;

	begin = NULL;
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

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*begin;
	t_list	*new;

	begin = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	begin = lst;
	while (begin->next)
	{
		ft_lstadd_back2(&new, ft_lstnew2(f(begin->content)));
		begin = begin->next;
	}
	ft_lstadd_back2(&new, ft_lstnew2(f(begin->content)));
	return (new);
}
