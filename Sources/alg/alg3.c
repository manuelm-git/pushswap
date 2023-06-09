/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:32:34 by manumart          #+#    #+#             */
/*   Updated: 2023/06/07 15:16:45 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void alg3(t_stack **a)
{
	int big;
	t_stack *stack;

	stack = *a;
	big = stack->content;
	while (stack)
	{
		if (stack->content > big)
			big = stack->content;
		 stack = stack->next;
	}
	if ((*a)->content == big)
		rotate(a,0);
	else if ((*a)->next->content == big)
		rev_rotate(a,0);
	if((*a)->content > (*a)->next->content)
		swap(a,0);
}
