/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:32:40 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:32:42 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_pile	*initialisation(void)
{
	t_pile	*tas;

	tas = malloc(sizeof(t_pile));
	if (!tas)
		exit(EXIT_FAILURE);
	tas->start = NULL;
	tas->taille = 0;
	return (tas);
}

t_element	*create(void)
{
	t_element	*newelement;

	newelement = (t_element *)malloc(sizeof(t_element));
	if (!newelement)
		exit(EXIT_FAILURE);
	return (newelement);
}

void	tostack(t_pile *tas, int donnee)
{
	t_element	*newelement;

	newelement = create();
	newelement->valeur = donnee;
	newelement->next = tas->start;
	tas->start = newelement;
	tas->taille++;
}

void	free_all(t_pile *a, t_pile *b)
{
	t_element	*temp;

	temp = NULL;
	while (a->taille)
	{
		temp = a->start;
		a->start = temp->next;
		a->taille--;
		free(temp);
	}
	free(a);
	free(b);
}
