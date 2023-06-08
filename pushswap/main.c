/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:49:59 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 20:00:40 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "pushswap.h"

void putlist(t_stack **lst,int argc, char **argv)
{
	int i;
	
	i = 0;
	while (++i > argc)
		ft_lstaddback(lst,ft_lstnew(ft_atoi(argv[i])));
}
int	issorted(t_stack **a)
{
	t_stack	*cursor;

	cursor = *a;
	while (cursor->next)
	{
		if (cursor->content > cursor->next->content)
			return (0);
		cursor = cursor->next;
	}
	ft_printf("sorted\n");
	return (1);
}
void algifcase(t_stack **a,t_stack **b,int argc)
{
	if (issorted(a))
		return ; 
	if (argc == 3)
		swap(a, 0);
	else if(argc == 4)
		alg3(a);
	else if(argc == 5 || argc == 6)
		alg5(a,b);
	else
		ft_printf("fodasse ainda falta");
}
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (check_geral(argc, argv) == 1)
	{
		ft_printf("error\n");
		return (0);
	}
	putlist(&a,argc,argv);
	get_index(&a);
	algifcase(&a,&b,argc);
	ft_lstclear(&a);
	ft_lstclear(&b);
}