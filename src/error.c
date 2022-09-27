/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:31:40 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:31:43 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	check_error_str(char *a[])
{
	int	i;
	int	j;

	i = 0;
	while (a[++i])
	{
		j = 0;
		if (a[i][0] == '-' && ft_isdigit(a[i][1]))
			j += 2;
		else if (ft_isdigit(a[i][0]))
			j++;
		else
			return (1);
		while (a[i][j])
		{
			if (!ft_isdigit(a[i][j]))
				return (1);
			j++;
		}
	}
	return (0);
}

static int	check_error_int(int argc, char *argv[])
{
	int	*stock_int;
	int	i;
	int	j;

	stock_int = parse_input(argc, argv);
	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (j < i)
		{
			if (stock_int[j] == stock_int[i])
			{
				free(stock_int);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(stock_int);
	return (0);
}

static int	check_error_atoi(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) == EXIT_FAILURE && argv[i][0] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	check_error(int argc, char *argv[])
{
	if (argc < 3)
		return (-1);
	if (check_error_str(argv))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (check_error_int(argc, argv))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (check_error_atoi(argc, argv))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	return (0);
}
