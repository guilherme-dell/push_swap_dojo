/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/03 00:11:15 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_swap(t_stack **stack);
void	operation_push(t_stack **stack_src, t_stack **stack_dest);
void	operation_rotate(t_stack **stack);
void	operation_reverse_rotate(t_stack **stack);

void	operation_swap(t_stack **stack)
{
	if (*stack == NULL)
		return ;
	if (stack_size(stack) < 2)
		return ;
	swap_values(&((*stack)->number), &((*stack)->next->number));
}

void	operation_push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*stack_dest_first_node;

	if (*stack_src == NULL)
		return ;
	stack_dest_first_node = stack_new((*stack_src)->number);
	stack_add_front(stack_dest, stack_dest_first_node);
	stack_remove_first_node(stack_src);
}

void	operation_rotate(t_stack **stack)
{
	t_stack	*new_last_node;
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*stack == NULL)
		return ;
	if (stack_size(stack) < 2)
		return ;
	new_last_node = stack_new((*stack)->number);
	last_node = stack_last_node(*stack);
	last_node->next = new_last_node;
	new_last_node->previous = last_node;
	new_first_node = (*stack)->next;
	free(*stack);
	*stack = new_first_node;
}

void	operation_reverse_rotate(t_stack **stack)
{
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*stack == NULL)
		return ;
	if (stack_size(stack) < 2)
		return ;
	last_node = stack_last_node(*stack);
	new_first_node = stack_new(last_node->number);
	stack_add_front(stack, new_first_node);
	last_node->previous->next = NULL;
	free(last_node);
}
