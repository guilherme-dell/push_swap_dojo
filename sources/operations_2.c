/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:27:17 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 23:38:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_swap(t_data *data, int operation);
void	run_push(t_data *data, int operation);
void	run_rotate(t_data *data, int operation);
void	run_reverse_rotate(t_data *data, int operation);

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
