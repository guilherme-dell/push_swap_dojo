/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:43 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/22 19:04:32 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "types.h"
# include "defines.h"

void	  initialize(t_data *data, int argc, char **argv);
void	  init_data(t_data *data);
void	  error(t_data *data, char *message);
void	  print_stack_elements(t_stack *stack);
t_stack	*stack_new(int content);
void	  stack_add_front(t_stack **stack, t_stack *new);
t_stack	*stack_last_node(t_stack *stack);
void	  stack_add_back(t_stack **stack, t_stack *new)
void	  clear_stack(t_stack **stack);

#endif
