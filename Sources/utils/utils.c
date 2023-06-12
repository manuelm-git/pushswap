/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:47:34 by manumart          #+#    #+#             */
/*   Updated: 2023/06/12 15:00:35 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	get_index(t_stack **a)
{
	t_stack	*temp;
	t_stack	*cursor;

	cursor = *a;
	while (cursor)
	{
		cursor->index = 0;
		temp = *a;
		while (temp)
		{
			if (cursor != temp && cursor->content > temp->content)
				cursor->index++;
			temp = temp->next;
		}
		cursor = cursor->next;
	}
}

void	pushtotop(t_stack **stack, int index, int whichstack)
{
	if (index == -1)
		return ;
	if (index < (ft_lstsize(*stack) / 2))
		rotate(stack, whichstack);
	else
		rev_rotate(stack, whichstack);
}

int	getbiggestindex(t_stack **stack)
{
	t_stack	*cursor;
	int		big;

	cursor = *stack;
	big = cursor->index;
	while (cursor)
	{
		if (cursor->index > big)
			big = cursor->index;
		cursor = cursor->next;
	}
	return (big);
}

int	indexchecker(t_stack **stack, int i)
{
	t_stack	*cursor;
	int		position;
	int		flag;

	position = 0;
	flag = -1;
	cursor = *stack;
	while (cursor)
	{
		if (cursor->index == i)
		{
			flag = 0;
			break ;
		}
		position++;
		cursor = cursor->next;
	}
	if (flag == -1)
		return (-1);
	return (position);
}
