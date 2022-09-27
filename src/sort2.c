/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:33:44 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:33:46 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	special_operation1(t_pile *a, t_pile *b)
{
	push_a(a, b);
	rotate_a(a, 1);
}

void	special_operation2(t_pile *a, t_pile *b)
{
	reverse_rotate_a(a, 1);
	push_a(a, b);
	rotate_a(a, 1);
	rotate_a(a, 1);
}

void	special_operation3(t_pile *a, t_pile *b)
{
	rotate_a(a, 1);
	push_a(a, b);
	swap_a(a, 1);
	reverse_rotate_a(a, 1);
}

void	special_operation4(t_pile *a, t_pile *b)
{
	push_a(a, b);
	swap_a(a, 1);
}

void	sort_5_3(t_pile *a, t_pile *b)
{
	t_element	*current;
	t_element	*stacka;

	current = b->start;
	stacka = a->start;
	if (a->taille == 4)
	{
		if (current->valeur > stacka->next->next->next->valeur)
			special_operation1(a, b);
		else
			special_operation2(a, b);
	}
	else
		special_operation1(a, b);
}
