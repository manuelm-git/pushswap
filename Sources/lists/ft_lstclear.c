/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:44:43 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 19:40:23 by manel            ###   ########.fr       */
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
