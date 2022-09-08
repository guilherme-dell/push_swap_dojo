/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:43 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/08 17:03:32 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "types.h"
# include "defines.h"

//sorting
void		sort_three(t_data *data, t_stack **a);
void		sort_five(t_data *data, t_stack **a);

// sorting_utils
int			find_greater_nbr(t_stack **stack);
int			find_smaller_nbr(t_stack **stack);
int			stack_size_until_element(t_stack **stack, int number);

//initalize
void		initialize(t_data *data, int argc, char **argv);
void		init_data(t_data *data, int argc);
void		ft_isinteger(t_data *data, int argc, char **argv);
int			find_last_leading_zero(char *number);
t_bool		is_outside_integers_range(char *number);

//memory_clean
void		memory_clean(t_data *data);
void		error(t_data *data, char *message);

//stack_utils_1.c
t_stack		*stack_new(int number);
void		stack_add_front(t_stack **stack, t_stack *new);
void		stack_add_back(t_stack **stack, t_stack *new);
t_stack		*stack_last_node(t_stack *stack);

//stack_utils_2.c
void		clear_stack(t_stack **stack);
void		stack_remove_first_node(t_stack **stack);
int			stack_size(t_stack **stack);

//normalization
int			*normalization(char **values, int nbr_of_elements);
void		fill_stacks(t_data *data, int *normalized_elements);
void		equals_numbers(t_data *data, char **values, int nbr_of_elements);

//operations_1.c
void		run_swap(t_data *data, int operation);
void		run_push(t_data *data, int operation);
void		run_rotate(t_data *data, int operation);
void		run_reverse_rotate(t_data *data, int operation);

//operations_2.c
void		operation_swap(t_stack **stack);
void		operation_push(t_stack **stack_src, t_stack **stack_dest);
void		operation_rotate(t_stack **stack);
void		operation_reverse_rotate(t_stack **stack);

//utils.c
void		swap_values(int *a, int *b);

//sorting.c
t_bool		sorting(t_stack **stack);
void		radix(t_data *data);

//algorithm_selection.c
void	algorithm_selection(t_data *data);
void	stack_sorting(t_data *data);

//temp_funcs
static	void	printthe_stacks(t_data *data);
void			print_stack_elements(t_stack *stack);


#endif
