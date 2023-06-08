/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:18 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 20:23:18 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	push(t_stack **src, t_stack **dest, int i)
{
	t_stack	*temp;
	t_stack	*cursor_src;
	t_stack	*cursor_dest;

	cursor_src = *src;
	if (!*dest)
	{
		*dest = *src;
		cursor_dest = *dest;
		*src = cursor_src->next;
		cursor_dest->next = NULL;
	}
	else
	{
		temp = *dest;
		*dest = *src;
		cursor_dest = *dest;
		*src = cursor_src->next;
		cursor_dest->next = temp;
	}
	if (i == 0)
		ft_printf("pa\n");
	else if (i == 1)
		ft_printf("pb\n");
}
