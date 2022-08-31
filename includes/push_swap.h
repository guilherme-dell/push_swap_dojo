/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:43 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/31 18:05:07 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "types.h"
# include "defines.h"

void		initialize(t_data *data, int argc, char **argv);
void		init_data(t_data *data, int argc);
void		error(t_data *data, char *message);
void		print_stack_elements(t_stack *stack);
t_stack		*stack_new(int content);
void		stack_add_front(t_stack **stack, t_stack *new);
t_stack		*stack_last_node(t_stack *stack);
void		stack_add_back(t_stack **stack, t_stack *new);
void		clear_stack(t_stack **stack);
int			*normalization(char **values, int nbr_of_elements);
void		fill_stacks(t_data *data, int *normalized_elements);
void		print_vetor(int *vetor, int nbr_of_elements);
void		equals_numbers(t_data *data, char **values, int nbr_of_elements);
void		opt_sa(t_stack *stack);
void		opt_sb(t_stack *stack);
void		opt_ss(t_data *data);
void		opt_ra(t_stack *stack);

#endif
