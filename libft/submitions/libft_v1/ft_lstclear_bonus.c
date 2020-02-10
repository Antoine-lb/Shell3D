/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:36:35 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/16 16:58:51 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "libft.h"

static void	delone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

void		ft_lstclear(t_list **lst, void (*del)(void *))
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
		delone(tmp, del);
	}
	delone(begin, del);
	*lst = NULL;
}
