/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:09 by manumart          #+#    #+#             */
/*   Updated: 2023/06/11 21:40:02 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	rotate(t_stack **lst, int i)
{
	t_stack	*temp;
	t_stack	*cursor;

	cursor = ft_lstgetlast(*lst);
	cursor->next = *lst;
	cursor = *lst;
	temp = (*lst)->next;
	cursor->next = NULL;
	*lst = temp;
	if (i == 0)
		ft_printf("ra\n");
	else if (i == 1)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 2);
	rotate(b, 2);
	ft_printf("rr\n");
}
