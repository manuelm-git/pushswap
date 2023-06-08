/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:16:07 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 20:48:24 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void pushtotop(t_stack **stack,int index, int whichstack)
{
	if (index == -1)
		return ;
	if (index < (ft_listsize(*stack) / 2))
		rotate(stack, whichstack);
	else
		rev_rotate(stack, whichstack);
}
int getbiggestindex(t_stack **stack)
{
	t_stack *cursor;
	int big;

	cursor = *stack;
	big = cursor->index;
	while (cursor)
	{
		if (big < cursor->index)
			big = cursor->index;
		cursor = cursor->next; 
	}
	return (big);
}
int indexchecker(t_stack **stack,int i)
{
	t_stack *cursor;
	int position;
	int flag;

	position = 0;
	flag = -1;
	cursor = *stack;
	while (cursor)
	{
		if (cursor->index == i)
		{
			flag = 0;
			break;
		}
		position++;
		cursor = cursor->next;

	}
	if (flag == -1)
		return (-1);
	return (position);
}
void toptolist(t_stack **stack,int index,int whichstack)
{
	if (index == -1)
		return ;
	if (index < ft_lstsize(*stack) / 2)
		rotate(stack,whichstack);
	else
		rev_rotate(stack,whichstack);
}
void putinb(t_stack **a, t_stack **b, int size)
{
	int chunk;
	int position;

	chunk = 30;
	position = 0;
	while (*a != NULL)
	{
		if ((*a)->index < chunk)
		{
			push(a,b,1);
			position++;
		}
		else if(position == chunk)
		{
			if (size < 100)
			{
				chunk += 30;
			}
			else
				chunk += 15;
		}
		else
			pushtotop(a, index_checker(a, (*a)->index), 0);
	}
	
}
/*
void alg100(t_stack **a, t_stack **b)
{
	int index;
	int big;

	putinb(a, b, ft_lstsize(*a))
	big = getbiggestindex(b)
	index = index_checker(b,big);
	while ((*b) != NULL  && index == index_checker(b, big))
	{
		index = putina
	}
	
	
}*/