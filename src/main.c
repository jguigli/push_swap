/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:31:51 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:32:30 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_pile	*a;
	t_pile	*b;
	int		error;

	a = initialisation();
	b = initialisation();
	error = check_error(argc, argv);
	if (error < 0)
	{
		free_all(a, b);
		return (-1);
	}
	complete_stack2(a, argc, argv);
	if (already_sort(a, b))
		sort(a, b);
	free_all(a, b);
	return (0);
}
