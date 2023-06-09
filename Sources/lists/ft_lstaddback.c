/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:49:00 by manumart          #+#    #+#             */
/*   Updated: 2023/05/23 14:06:01 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_lstaddback(t_stack **lst, t_stack *newnode)
{
	t_stack	*lastnode;

	if (!lst | !newnode)
		return ;
	if (!*lst)
	{
		*lst = newnode;
	}
	else
	{
		lastnode = ft_lstgetlast(*lst);
		lastnode->next = newnode;
	}
}
