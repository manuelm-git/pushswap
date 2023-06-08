/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:52:12 by manumart          #+#    #+#             */
/*   Updated: 2023/06/02 11:51:04 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_lstaddfront(t_stack **lst, t_stack *newnode)
{
	if (!lst | !newnode)
		return (0);
	newnode->next = *lst;
	*lst = newnode;
	return (1);
}
