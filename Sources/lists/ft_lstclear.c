/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:44:43 by manumart          #+#    #+#             */
/*   Updated: 2023/06/07 15:14:38 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*lst1;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		lst1 = (*lst)->next;
		free(*lst);
		*lst = lst1;
	}
	free(lst1);
}
