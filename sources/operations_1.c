/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/31 18:06:48 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	opt_sa(t_stack *stack)
{
	t_stack	aux_temp;

	aux_temp.number = stack->number;
	stack->number = stack->next->number;
	stack->next->number = aux_temp.number;
	ft_printf("sa\n");
}

void	opt_sb(t_stack *stack)
{
	t_stack	aux_temp;

	aux_temp.number = stack->number;
	stack->number = stack->next->number;
	stack->next->number = aux_temp.number;
	ft_printf("sb\n");
}

void	opt_ss(t_data *data)
{
	opt_sa(*data->stack_a);
	opt_sb(*data->stack_b);
	ft_printf("ss\n");
}

void	opt_ra(t_stack *stack)
{
	t_stack aux_temp;
	t_stack *aux_temp2;

	aux_temp2 = stack_last_node(stack);

	aux_temp.number = stack->number;
	stack->number =aux_temp2->number;
	aux_temp2->number = aux_temp.number;
	ft_printf("ra\n");
}