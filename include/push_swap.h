/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguigli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:33:35 by jguigli           #+#    #+#             */
/*   Updated: 2022/02/16 16:33:37 by jguigli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>


typedef struct ElementListe {
	int					valeur;
	struct ElementListe	*next;
}	t_element;

typedef struct ListeRepere{
	t_element	*start;
	int			taille;
}	t_pile;


t_pile		*initialisation(void);
t_element	*create(void);
int			sort(t_pile *a, t_pile *b);
void		tostack(t_pile *tas, int donnee);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
int			already_sort(t_pile *a, t_pile *b);
int			*parse_input(int argc, char *argv[]);
void		complete_stack(t_pile*tas, int argc, char *argv[]);
void		complete_stack2(t_pile *tas, int argc, char *argv[]);
int			*sort_array(int argc, char *argv[]);
int			sort_big(t_pile *a, t_pile *b);
int			sort_5(t_pile *a, t_pile *b);
int			sort_5_2(t_pile *a, t_pile *b);
int			sort_3(t_pile *a);
int			sort_2(t_pile *a);
void		sort_5_3(t_pile *a, t_pile *b);
int			check_error(int argc, char *argv[]);
void		swap_a(t_pile *a, int pass);
void		swap_b(t_pile *b, int pass);
void		push_a(t_pile *a, t_pile *b);
void		push_b(t_pile *a, t_pile *b);
void		rotate_a(t_pile *a, int pass);
void		rotate_b(t_pile *b, int pass);
void		reverse_rotate_a(t_pile*a, int pass);
void		reverse_rotate_b(t_pile *b, int pass);
void		swap_swap(t_pile *a, t_pile *b);
void		rotate_rotate(t_pile *a, t_pile *b);
void		reverse_rotate_rotate(t_pile *a, t_pile *b);
void		special_operation1(t_pile *a, t_pile *b);
void		special_operation2(t_pile *a, t_pile *b);
void		special_operation3(t_pile *a, t_pile *b);
void		special_operation4(t_pile *a, t_pile *b);
void		free_all(t_pile *a, t_pile *b);

int			affiche(t_pile *a, t_pile *b); //a retirer

#endif
