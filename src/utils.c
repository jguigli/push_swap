/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:34:17 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:34:19 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_atoi(const char *str)
{
	int			negative;
	long int	rep;
	int			i;

	negative = 1;
	rep = 0;
	i = 0;
	if (str[i] == '-')
	{
		negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rep *= 10;
		rep += str[i] - 48;
		i++;
	}
	if ((rep * negative < -2147483648) || (rep * negative > 2147483647))
		return (EXIT_FAILURE);
	return (rep * negative);
}

int	already_sort(t_pile *a, t_pile *b)
{
	t_element	*current;
	int			temp;
	int			i;

	i = 0;
	temp = 0;
	(void)b;
	current = a->start;
	while (i < a->taille - 1)
	{
		temp = current->valeur;
		current = current->next;
		if (temp > current->valeur)
			return (1);
		i++;
	}
	return (0);
}

int	*sort_array(int argc, char *argv[])
{
	int	inter;
	int	exter;
	int	temp;
	int	*stock_int_sorted;

	stock_int_sorted = parse_input(argc, argv);
	exter = 0;
	while (exter < argc - 2)
	{
		inter = exter + 1;
		while (inter < argc - 1)
		{
			if (stock_int_sorted[exter] > stock_int_sorted[inter])
			{
				temp = stock_int_sorted[exter];
				stock_int_sorted[exter] = stock_int_sorted[inter];
				stock_int_sorted[inter] = temp;
			}
			inter++;
		}
		exter++;
	}
	return (stock_int_sorted);
}
