/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:32:47 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/19 16:51:27 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_stack(t_stack **stack);
void	stack_remove_first_node(t_stack **stack);
int		stack_size(t_stack **stack);

void	clear_stack(t_stack **stack)
{
	t_stack	*ptr_i;
	t_stack	*next;

	if (*stack == NULL)
	{
		free(stack);
		return ;
	}
	ptr_i = *stack;
	while (ptr_i)
	{
		next = ptr_i->next;
		free(ptr_i);
		ptr_i = next;
	}
	*stack = NULL;
	free(stack);
}

void	stack_remove_first_node(t_stack **stack)
{
	t_stack	*new_first_node;

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return ;
	}
	new_first_node = (*stack)->next;
	free(*stack);
	*stack = new_first_node;
}

int	stack_size(t_stack **stack)
{
	t_stack	*ptr_i;
	int		length;

	length = 0;
	ptr_i = *stack;
	if (*stack == NULL)
		return (length);
	while (ptr_i)
	{
		length++;
		ptr_i = ptr_i->next;
	}
	return (length);
}
