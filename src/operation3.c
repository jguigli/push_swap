/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:33:12 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:33:14 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_swap(t_pile *a, t_pile *b)
{
	swap_a(a, 0);
	swap_b(b, 0);
	write(1, "ss", 2);
}

void	rotate_rotate(t_pile *a, t_pile *b)
{
	rotate_a(a, 0);
	rotate_b(b, 0);
	write(1, "rr", 2);
}

void	reverse_rotate_rotate(t_pile *a, t_pile *b)
{
	reverse_rotate_a(a, 0);
	reverse_rotate_b(b, 0);
	write(1, "rrr", 3);
}
