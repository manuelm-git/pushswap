/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:20:04 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 19:47:54 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	rev_rotate(t_stack **lst,int i)
{
	t_stack	*last;
	t_stack	*temp;
	
	last = ft_lstgetlast(*lst);
	last->next = *lst;
	temp = *lst;
	while (temp != last)
	{
		temp = temp->next;
	}
	
	temp->next = NULL;
	*lst = last;
	if (i == 0)
		ft_printf("rra\n");
	else if (i == 1)
		ft_printf("rrb\n");
}

void rrr(t_stack **src, t_stack **dest, int i)
{
	rev_rotate(src,2);
	rev_rotate(dest,2);
	if (i == 2)
		ft_printf("rrr\n");
}
