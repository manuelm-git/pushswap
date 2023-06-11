/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:20:04 by manumart          #+#    #+#             */
/*   Updated: 2023/06/11 21:39:58 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	rev_rotate(t_stack **lst, int i)
{
	t_stack	*last;
	t_stack	*temp;

	last = ft_lstgetlast(*lst);
	last->next = *lst;
	temp = *lst;
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	*lst = last;
	if (i == 0)
		ft_printf("rra\n");
	else if (i == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, int i)
{
	rev_rotate(a, 2);
	rev_rotate(b, 2);
	if (i == 2)
		ft_printf("rrr\n");
}
