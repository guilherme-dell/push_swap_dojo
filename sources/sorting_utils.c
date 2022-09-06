/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:25:16 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/06 08:39:29 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_greater_nbr(t_stack **stack);
int	find_smaller_nbr(t_stack **stack);
int	stack_size_until_element(t_stack **stack, int number);

int	find_greater_nbr(t_stack **stack)
{
	int		greater;
	t_stack	*ptr_i;

	greater = 0;
	ptr_i = *stack;
	while (ptr_i->next)
	{
		if (ptr_i->number > ptr_i->next->number && ptr_i->number > greater)
			greater = ptr_i->number;
		ptr_i = ptr_i->next;
	}
	if (ptr_i->number > greater)
		greater = ptr_i->number;
	return (greater);
}

int	find_smaller_nbr(t_stack **stack)
{
	int		smaller;
	t_stack	*ptr_i;

	ptr_i = *stack;
	if (ptr_i->number < ptr_i->next->number)
		smaller = ptr_i->number;
	else
		smaller = ptr_i->next->number;
	while (ptr_i->next)
	{
		if (ptr_i->number < ptr_i->next->number && ptr_i->number < smaller)
			smaller = ptr_i->number;
		ptr_i = ptr_i->next;
	}
	if (ptr_i->number < smaller)
		smaller = ptr_i->number;
	return (smaller);
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
