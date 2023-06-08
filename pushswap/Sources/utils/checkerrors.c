/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manel <manel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:10:24 by manumart          #+#    #+#             */
/*   Updated: 2023/06/08 19:59:12 by manel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

char	char_test(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && (argv[i][j] != '-'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_dups(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	negative(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
		{
			j += 1;
			if (!(argv[i][j] > '0' && argv[i][j] <= '9'))
				return (1);
		}
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])))
				exit(ft_printf("Error\n"));
			j++;
		}
		i++;
	}
	return (0);
}

int	check_limits(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

int	check_geral(int argc, char **argv)
{
	if (char_test(argc, argv) == 1)
		return (1);
	else if (check_dups(argc, argv) == 1)
		return (1);
	else if (negative(argc, argv) == 1)
		return (1);
	else if (check_limits(argc, argv) == 1)
		return (1);
	return (0);
}
