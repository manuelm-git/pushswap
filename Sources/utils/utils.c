/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:47:34 by manumart          #+#    #+#             */
/*   Updated: 2023/06/07 16:39:16 by manumart         ###   ########.fr       */
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

//int putina()
