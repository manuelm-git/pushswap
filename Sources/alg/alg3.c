/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:32:34 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 19:46:56 by manel            ###   ########.fr       */
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
