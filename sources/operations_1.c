/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/01 21:48:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_swap(t_data *data, int operation)
{
	if (operation == SA)
	{
		operation_swap(data->stack_a);
		ft_printf("sa\n");
	}
	else if (operation == SB)
	{
		operation_swap(data->stack_b);
		ft_printf("sb\n");
	}
	else if (operation == SS)
	{
		operation_swap(data->stack_a);
		operation_swap(data->stack_b);
		ft_printf("ss\n");
	}
}

void	operation_swap(t_stack **stack)
{
	if (*stack == NULL)
		return ;
	if (stack_size(stack) < 2)
		return ;
	swap_values(&((*stack)->number), &((*stack)->next->number));
}

void	run_rotate(t_data *data, int operation)
{
	if (operation == RA)
	{
		operation_rotate(data->stack_a);
		ft_printf("ra\n");
	}
	else if (operation == RB)
	{
		operation_rotate(data->stack_b);
		ft_printf("rb\n");
	}
	else if (operation == RR)
	{
		operation_rotate(data->stack_a);
		operation_rotate(data->stack_b);
		ft_printf("rr\n");
	}
}

void	operation_rotate(t_stack **stack)
{
	t_stack *new_last_node;
	t_stack *last_node;
	t_stack *new_first_node;

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
	t_stack *last_node;
	t_stack *new_first_node;

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

void	run_reverse_rotate(t_data *data, int operation)
{
	if (operation == RRA)
	{
		operation_reverse_rotate(data->stack_a);
		ft_printf("rra\n");
	}
	else if (operation == RRB)
	{
		operation_reverse_rotate(data->stack_b);
		ft_printf("rrb\n");
	}
	else if (operation == RRR)
	{
		operation_reverse_rotate(data->stack_a);
		operation_reverse_rotate(data->stack_b);
		ft_printf("rrr\n");
	}
}

void	run_push(t_data *data, int operation)
{
	if (operation == PA)
	{
		operation_push(data->stack_b, data->stack_a);
		ft_printf("pa\n");
	}
	else if (operation == PB)
	{
		operation_push(data->stack_a, data->stack_b);
		ft_printf("pb\n");
	}
}

void operation_push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack *stack_dest_first_node;

	if (*stack_src == NULL)
		return ;
	stack_dest_first_node = stack_new((*stack_src)->number);
	stack_add_front(stack_dest, stack_dest_first_node);
	stack_remove_first_node(stack_dest);
}
