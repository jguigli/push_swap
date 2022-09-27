/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:33:01 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:33:02 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_pile *a, int pass)
{
	t_element	*current;
	t_element	*temp;
	int			i;

	i = 1;
	current = a->start;
	temp = a->start;
	current = current->next;
	a->start = current;
	while (i < a->taille - 1)
	{
		current = current->next;
		i++;
	}
	current->next = temp;
	if (pass)
		write(1, "ra\n", 3);
}

void	rotate_b(t_pile *b, int pass)
{
	t_element	*current;
	t_element	*temp;
	int			i;

	i = 1;
	current = b->start;
	temp = b->start;
	current = current->next;
	b->start = current;
	while (i < b->taille - 1)
	{
		current = current->next;
		i++;
	}
	current->next = temp;
	if (pass)
		write(1, "rb\n", 3);
}

void	reverse_rotate_a(t_pile *a, int pass)
{
	t_element	*current;
	int			i;

	i = 0;
	current = a->start;
	while (i < a->taille - 1)
	{
		current = current->next;
		i++;
	}
	current->next = a->start;
	a->start = current;
	if (pass)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_pile *b, int pass)
{
	t_element	*current;
	int			i;

	i = 0;
	current = b->start;
	while (i < b->taille - 1)
	{
		current = current->next;
		i++;
	}
	current->next = b->start;
	b->start = current;
	if (pass)
		write(1, "rrb\n", 4);
}
