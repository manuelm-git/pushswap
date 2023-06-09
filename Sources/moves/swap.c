/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:05:19 by manumart          #+#    #+#             */
/*   Updated: 2023/06/02 12:22:17 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	swap(t_stack **lst, int i)
{
	t_stack	*temp;
	t_stack	*cursor;

	cursor = *lst;
	temp = cursor->next->next;
	cursor = cursor->next;
	cursor->next = *lst;
	*lst = cursor;
	cursor = cursor->next;
	cursor->next = temp;
	if (i == 0)
		ft_printf("sa\n");
	else if (i == 1)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int i)
{
	swap(a, 1);
	swap(b, 2);
	if (i == 3)
		ft_printf("ss\n");
}
