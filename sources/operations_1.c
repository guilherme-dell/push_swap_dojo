/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/31 21:01:13 by coder            ###   ########.fr       */
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

	last_node = stack_last_node(*stack);
	ft_printf("%d - last | %d previous_last \n", (stack_last_node(*stack))->number, ((stack_last_node(*stack))->previous)->number);
	ft_printf("rra\n");
}