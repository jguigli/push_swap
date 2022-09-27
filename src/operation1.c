/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:32:51 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:32:53 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_pile *a, int pass)
{
	t_element	*current;
	t_element	*temp;

	if (a->taille > 1)
	{
		current = a->start;
		temp = current;
		current = current->next;
		temp->next = current->next;
		current->next = a->start;
		a->start = current;
		if (pass)
			write(1, "sa\n", 3);
	}
}

void	swap_b(t_pile *b, int pass)
{
	t_element	*current;
	t_element	*temp;

	if (b->taille > 1)
	{
		current = b->start;
		temp = current;
		current = current->next;
		temp->next = current->next;
		current->next = b->start;
		b->start = current;
		if (pass)
			write(1, "sb\n", 3);
	}
}

void	push_a(t_pile *a, t_pile *b)
{
	t_element	*current;
	t_element	*temp;

	if (b->taille > 0)
	{
		current = b->start;
		temp = b->start;
		current = current->next;
		b->start = current;
		temp->next = a->start;
		a->start = temp;
		a->taille++;
		b->taille--;
		write(1, "pa\n", 3);
	}
}

void	push_b(t_pile *a, t_pile *b)
{
	t_element	*current;
	t_element	*temp;

	if (a->taille > 0)
	{
		current = a->start;
		temp = a->start;
		current = current->next;
		a->start = current;
		temp->next = b->start;
		b->start = temp;
		b->taille++;
		a->taille--;
		write(1, "pb\n", 3);
	}
}
