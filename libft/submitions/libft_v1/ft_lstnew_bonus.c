/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:04:01 by ale-baux          #+#    #+#             */
/*   Updated: 2019/10/15 17:25:54 by ale-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	if (!(dest = malloc(sizeof(t_list *))))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}
