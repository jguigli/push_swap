/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:34:01 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:34:02 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sort_3(t_pile *a)
{
	t_element	*u;
	t_element	*d;
	t_element	*t;

	u = a->start;
	d = u->next;
	t = d->next;
	if (u->valeur > d->valeur && d->valeur < t->valeur && t->valeur > u->valeur)
		swap_a(a, 1);
	if (u->valeur > d->valeur && d->valeur < t->valeur && t->valeur < u->valeur)
		rotate_a(a, 1);
	if (u->valeur < d->valeur && d->valeur > t->valeur && t->valeur < u->valeur)
		reverse_rotate_a(a, 1);
	if (u->valeur > d->valeur && d->valeur > t->valeur && t->valeur < u->valeur)
	{
		swap_a(a, 1);
		reverse_rotate_a(a, 1);
	}
	if (u->valeur < d->valeur && d->valeur > t->valeur && t->valeur > u->valeur)
	{
		swap_a(a, 1);
		rotate_a(a, 1);
	}
	return (0);
}

int	sort_5_2(t_pile *a, t_pile *b)
{
	t_element	*current;
	t_element	*stacka;

	while (b->taille)
	{
		current = b->start;
		stacka = a->start;
		if (current->valeur > stacka->valeur)
		{
			if (current->valeur > stacka->next->valeur)
			{
				if (current->valeur > stacka->next->next->valeur)
					sort_5_3(a, b);
				else
					special_operation3(a, b);
			}
			else
				special_operation4(a, b);
		}
		else
			push_a(a, b);
	}
	return (0);
}

int	sort_5(t_pile *a, t_pile *b)
{
	push_b(a, b);
	push_b(a, b);
	sort_3(a);
	sort_5_2(a, b);
	return (0);
}

int	sort_big(t_pile *a, t_pile *b)
{
	t_element	*current;
	int			i;
	int			j;
	int			size;

	size = a->taille;
	i = 0;
	while (already_sort(a, b))
	{
		j = 0;
		while (j < size)
		{
			current = a->start;
			if ((current->valeur >> i) & 1)
				rotate_a(a, 1);
			else
				push_b(a, b);
			j++;
		}
		while (b->taille)
			push_a(a, b);
		i++;
	}
	return (0);
}

int	sort(t_pile *a, t_pile *b)
{
	if (a->taille == 3)
		sort_3(a);
	else if (a->taille == 2)
		sort_2(a);
	else if (a->taille == 5)
		sort_5(a, b);
	else
		sort_big(a, b);
	return (0);
}
