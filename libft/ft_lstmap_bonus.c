/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:12:48 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/18 16:48:38 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			delone_map(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

static void			ft_lstclear_map(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*tmp;

	tmp = NULL;
	begin = *lst;
	if (!lst || !del || !(*lst))
		return ;
	while (begin->next)
	{
		tmp = begin;
		begin = begin->next;
		delone_map(tmp, del);
	}
	delone_map(begin, del);
	*lst = NULL;
}

static t_list		*ft_lstnew_map(void *content)
{
	t_list	*dest;

	if (!(dest = malloc(sizeof(t_list *))))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}

static void			ft_lstadd_back_map(t_list **alst, t_list *new)
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

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*begin;
	t_list	*new;
	t_list	*tmp;

	begin = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	begin = lst;
	while (begin->next)
	{
		tmp = ft_lstnew_map(f(begin->content));
		if (tmp)
		{
			ft_lstadd_back_map(&new, tmp);
		}
		else
		{
			ft_lstclear_map(&lst, del);
			return (NULL);
		}
		begin = begin->next;
	}
	ft_lstadd_back_map(&new, ft_lstnew_map(f(begin->content)));
	return (new);
}
