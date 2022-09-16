/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:25:16 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:16:44 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_sorted(t_stack **stack);
int		find_greatest_nbr(t_stack **stack);
int		find_smallest_nbr(t_stack **stack);
int		stack_size_until_element(t_stack **stack, int number);

t_bool	is_sorted(t_stack **stack)
{
	t_stack	*iterator;

	if (*stack == NULL)
		return (false);
	iterator = *stack;
	while (iterator->next)
	{
		if (iterator->number > iterator->next->number)
			return (false);
		iterator = iterator->next;
	}
	return (true);
}

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
