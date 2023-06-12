/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:16:07 by manumart          #+#    #+#             */
/*   Updated: 2023/06/12 14:51:05 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	putinb(t_stack **a, t_stack **b, int size)
{
	int	chunk;
	int	counterb;

	chunk = 30;
	counterb = 0;
	while (*a != NULL)
	{
		if ((*a)->index < chunk)
		{
			push(a, b, 1);
			counterb++;
		}
		else if (counterb == chunk)
		{
			if (size > 100)
			{
				chunk += 30;
			}
			else
				chunk += 15;
		}
		else
			pushtotop(a, indexchecker(a, (*a)->index), 0);
	}
}

int	putina(t_stack **a, t_stack **b, int *big, int index)
{
	if ((*a) && (*a)->next && (*a)->content > (*a)->next->content)
	{
		swap(a, 0);
		(*big)--;
		index = indexchecker(b, *big);
	}
	else if ((indexchecker(b, ((*big) - 1)) == 0))
	{
		push(b, a, 0);
		index = indexchecker(b, (*big));
	}
	else if (index == 2 && (indexchecker(b, ((*big) - 1)) == 0))
	{
		push(b, a, 0);
		(*big)--;
		rotate(b, 1);
		push(b, a, 0);
		(*big)--;
		swap(a, 0);
		index = indexchecker(b, (*big));
	}
	index = putina2(a, b, big, index);
	return (index);
}

int	putina2(t_stack **a, t_stack **b, int *big, int index)
{
	if (index == 1 && (indexchecker(b, (*big) - 1)) == 0)
	{
		swap(b, 1);
		index = indexchecker(b, (*big));
	}
	else if (indexchecker(b, (*big)) == 0)
	{
		push(b, a, 0);
		(*big)--;
		index = indexchecker(b, (*big));
	}
	else
	{
		pushtotop(b, index, 1);
		index = indexchecker(b, (*big));
	}
	return (index);
}

void	alg100(t_stack **a, t_stack **b)
{
	int	index;
	int	big;

	putinb(a, b, ft_lstsize(*a));
	big = getbiggestindex(b);
	index = indexchecker(b, big);
	while ((*b) != NULL && index == indexchecker(b, big))
		index = putina(a, b, &big, index);
	if ((*b) == NULL && (*a)->content > (*a)->next->content)
		swap(a, 0);
}
