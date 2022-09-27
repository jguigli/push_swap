/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:33:24 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:33:25 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*parse_input(int argc, char *argv[])
{
	int	*stock_int;
	int	i;
	int	j;

	stock_int = malloc(sizeof(int) * argc - 1);
	if (!stock_int)
		return (NULL);
	i = 1;
	j = argc - 2;
	while (i < argc)
	{
		stock_int[j--] = ft_atoi(argv[i++]);
	}
	return (stock_int);
}

void	complete_stack(t_pile *tas, int argc, char *argv[])
{
	int	*stock_int;
	int	i;

	i = 0;
	stock_int = parse_input(argc, argv);
	while (i < argc - 1)
	{
		tostack(tas, stock_int[i++]);
	}
	free(stock_int);
}

static int	*complete_stack2_1(int argc, int *stock, int *stock_sorted)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (stock[i] == stock_sorted[j])
			{
				stock[i] = j + 1;
				while (j < argc - 1)
					j++;
			}
			j++;
		}
		i++;
	}
	return (stock);
}

void	complete_stack2(t_pile *tas, int argc, char *argv[])
{
	int	*stock_int;
	int	*stock_int_sorted;
	int	i;

	i = 0;
	stock_int = parse_input(argc, argv);
	stock_int_sorted = sort_array(argc, argv);
	stock_int = complete_stack2_1(argc, stock_int, stock_int_sorted);
	i = 0;
	while (i < argc - 1)
		tostack(tas, stock_int[i++]);
	free(stock_int);
	free(stock_int_sorted);
}
