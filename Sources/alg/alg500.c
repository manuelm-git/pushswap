/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg500.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:23:17 by manumart          #+#    #+#             */
/*   Updated: 2023/06/11 18:27:49 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int pos_checker(t_stack **b,int big, int size)
{
	int i;
	t_stack *cursor;

	i = 0;
	cursor = *b;
	while (cursor->index != big)
	{
		i++;
		cursor = cursor->next;
	}
	size = size - i;
	if (i < size)
		return (0);
	return(1);
}
void sort_a(t_stack **a, t_stack **b)
{
	while ((*b))
	{
		if (!(b))
			break;
		if ((*b)->index != getbiggestindex(b) && !pos_checker(b, getbiggestindex(b), ft_lstsize(*b)))
			rotate(b,1);
		else if ((*b)->index != getbiggestindex(b) && pos_checker(b, getbiggestindex(b), ft_lstsize(*b)))
			rev_rotate(b,1);
		else if ((*b)->index == getbiggestindex(b))
			push(b,a,0);
	}
	
}

void	alg500(t_stack **a, t_stack **b)
{
	int i;

	i = 0;
	while (*a)
	{
		if (i > 1 && (*a)->index <= i)
		{
			push(a, b, 1);
			i++;
			rotate(b, 1);
		}
		else if ((*a)->index <= i + 30)
		{
			push(a, b, 1);
			i++;
		}
		else if ((*a)->index >= i)
			rotate(a,0);
	}
	sort_a(a,b);
}
