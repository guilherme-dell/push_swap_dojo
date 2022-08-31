/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/01 00:07:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	opt_sa(t_stack *stack)
{
	swap_values(&stack->number, &stack->next->number);
	ft_printf("sa\n");
}

void	opt_sb(t_stack *stack)
{
	swap_values(&stack->number, &stack->next->number);
	ft_printf("sb\n");
}

void	opt_ss(t_data *data)
{
	opt_sa(*data->stack_a);
	opt_sb(*data->stack_b);
	ft_printf("ss\n");
}

void	opt_ra(t_stack **stack)
{
	t_stack *new_last_node;
	t_stack *last_node;
	t_stack *new_first_node;

	new_last_node = stack_new((*stack)->number);
	last_node = stack_last_node(*stack);
	last_node->next = new_last_node;
	new_last_node->previous = last_node;
	new_first_node = (*stack)->next;
	free(*stack);
	*stack = new_first_node;
	ft_printf("ra\n");
}

void	opt_rb(t_stack **stack)
{
	t_stack *new_last_node;
	t_stack *last_node;
	t_stack *new_first_node;

	new_last_node = stack_new((*stack)->number);
	last_node = stack_last_node(*stack);
	last_node->next = new_last_node;
	new_first_node = (*stack)->next;
	free(*stack);
	*stack = new_first_node;
	ft_printf("ra\n");
}

void	opt_rra(t_stack **stack)
{
	t_stack *last_node;
	t_stack *new_first_node;

	last_node = stack_last_node(*stack);
	new_first_node = stack_new(last_node->number);
	stack_add_front(stack, new_first_node);
	last_node->previous->next = NULL;
	free(last_node);
	ft_printf("rra\n");
}

void opt_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *stack_b_first_node;

	stack_b_first_node = stack_new((*stack_a)->number);
	stack_add_front(stack_b, stack_b_first_node);
	stack_remove_first_node(stack_a);
	ft_printf("pb\n");
}

void opt_pa(t_stack **stack_b, t_stack **stack_a)
{
	t_stack *stack_a_first_node;

	stack_a_first_node = stack_new((*stack_b)->number);
	stack_add_front(stack_a, stack_a_first_node);
	stack_remove_first_node(stack_b);
	ft_printf("pa\n");
}
