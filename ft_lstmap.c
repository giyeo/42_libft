/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:44:35 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/25 22:49:13 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lista;

	if (lst == 0)
		return (0);
	lista = ft_lstnew(f(lst->content));
	if (lista == 0)
	{
		ft_lstclear(&lista, del);
		return (0);
	}
	lista->next = ft_lstmap(lst->next, f, del);
	return (lista);
}
