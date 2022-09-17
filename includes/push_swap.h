/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:43 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:31:28 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "types.h"

void		sort_three_elements(t_data *data);
void		sort_five_elements(t_data *data);

int			find_greatest_nbr(t_stack **stack);
int			find_smallest_nbr(t_stack **stack);
int			stack_size_until_element(t_stack **stack, int number);
void		put_element_on_top(t_data *data, t_stack **a, int element);
void		put_element_on_top_b(t_data *data, t_stack **a, int element);

void		initialize(t_data *data, int argc, char **argv);
void		init_data(t_data *data, int argc);
void		ft_isinteger(t_data *data, int argc, char **argv);

void		memory_clean(t_data *data);
void		error(t_data *data, char *message);

t_stack		*stack_new(int number);
void		stack_add_front(t_stack **stack, t_stack *new);
void		stack_add_back(t_stack **stack, t_stack *new);
t_stack		*stack_last_node(t_stack *stack);

void		clear_stack(t_stack **stack);
void		stack_remove_first_node(t_stack **stack);
int			stack_size(t_stack **stack);

int			*normalization(char **argv, int nbr_of_elements);
void		fill_stacks(t_data *data, int *normalized_elements);
void		check_for_repeated_numbers(t_data *data, char **argv);

void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);

void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);

void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

t_bool		is_sorted(t_stack **stack);
void		radix(t_data *data);

void		algorithm_selection(t_data *data);

#endif
