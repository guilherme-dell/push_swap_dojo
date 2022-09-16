/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:25:16 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/16 23:38:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_greater_nbr(t_stack **stack);
int	find_smaller_nbr(t_stack **stack);
int	stack_size_until_element(t_stack **stack, int number);

int	find_greatest_nbr(t_stack **stack)
{
	int		greatest;
	t_stack	*ptr_i;

	greatest = 0;
	ptr_i = *stack;
	while (ptr_i->next)
	{
		if (ptr_i->number > ptr_i->next->number && ptr_i->number > greatest)
			greatest = ptr_i->number;
		ptr_i = ptr_i->next;
	}
	if (ptr_i->number > greatest)
		greatest = ptr_i->number;
	return (greatest);
}

int	find_smallest_nbr(t_stack **stack)
{
	int		smallest;
	t_stack	*ptr_i;

	ptr_i = *stack;
	if (ptr_i->number < ptr_i->next->number)
		smallest = ptr_i->number;
	else
		smallest = ptr_i->next->number;
	while (ptr_i->next)
	{
		if (ptr_i->number < ptr_i->next->number && ptr_i->number < smallest)
			smallest = ptr_i->number;
		ptr_i = ptr_i->next;
	}
	if (ptr_i->number < smallest)
		smallest = ptr_i->number;
	return (smallest);
}

int	stack_size_until_element(t_stack **stack, int number)
{
	t_stack	*ptr_i;
	int		node;

	node = 0;
	ptr_i = *stack;
	while (ptr_i->next)
	{
		if (number == ptr_i->number)
			return (node);
		ptr_i = ptr_i->next;
		node++;
	}
	return (node);
}

void	put_element_on_top(t_data *data, t_stack **a, int element)
{
	int	stack_length;

	stack_length = stack_size(a);
	if (stack_size_until_element(a, element) <= (stack_length / 2))
	{
		while ((*a)->number != element)
			run_rotate(data, RA);
	}
	else
	{
		while ((*a)->number != element)
			run_reverse_rotate(data, RRA);
	}
}

void	put_element_on_top_b(t_data *data, t_stack **a, int element)
{
	int	stack_length;

	stack_length = stack_size(a);
	if (stack_size_until_element(a, element) <= (stack_length / 2))
	{
		while ((*a)->number != element)
			run_rotate(data, RB);
	}
	else
	{
		while ((*a)->number != element)
			run_reverse_rotate(data, RRB);
	}
}
