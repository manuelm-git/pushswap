/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:06:23 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 20:12:37 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H

# define PUSHSWAP_H

# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	struct s_stack	*next;
	int				content;
	int				index;
}	t_stack;

int		issorted(t_stack **a);
void	ft_lstaddback(t_stack **lst, t_stack *newnode);
int	ft_lstaddfront(t_stack **lst, t_stack *newnode);
void	ft_lstclear(t_stack **lst);
t_stack	*ft_lstgetlast(t_stack *lst);
t_stack	*ft_lstnew(int content);
int	ft_lstsize(t_stack *lst);
void	push(t_stack **src, t_stack **dest, int i);
void	rev_rotate(t_stack **lst,int i);
void 	rrr(t_stack **src, t_stack **dest, int i);
void	rotate(t_stack **lst,int i);
void 	rr(t_stack **a, t_stack **b);
void	swap(t_stack **lst, int i);
void	ss(t_stack **a, t_stack **b, int i);
char	char_test(int argc, char **argv);
int		check_dups(int argc, char **argv);
int		negative(int argc, char **argv);
int		check_limits(int argc, char **argv);
int		check_geral(int argc, char **argv);
int		ft_atoi(const char *str);
int		ft_isdigit(int x);
size_t	ft_strlen(const char *x);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	get_index(t_stack **a);
void 	putlist(t_stack **lst,int argc, char **argv);
void 	alg3(t_stack **a);
void 	pushsmallest(t_stack **a, t_stack **b, int position, int flag);
void 	alg5(t_stack **a,t_stack **b);
int 	getsmallest(t_stack **a);

#endif
