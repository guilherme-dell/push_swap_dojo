/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:42:27 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:04:11 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	rra(t_stack **a)
{
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*a == NULL)
		return ;
	if (stack_size(a) < 2)
		return ;
	last_node = stack_last_node(*a);
	new_first_node = stack_new(last_node->number);
	stack_add_front(a, new_first_node);
	last_node->previous->next = NULL;
	free(last_node);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*b == NULL)
		return ;
	if (stack_size(b) < 2)
		return ;
	last_node = stack_last_node(*b);
	new_first_node = stack_new(last_node->number);
	stack_add_front(b, new_first_node);
	last_node->previous->next = NULL;
	free(last_node);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*a != NULL && stack_size(a) >= 2)
	{
		last_node = stack_last_node(*a);
		new_first_node = stack_new(last_node->number);
		stack_add_front(a, new_first_node);
		last_node->previous->next = NULL;
		free(last_node);
	}
	if (*b != NULL && stack_size(b) >= 2)
	{
		last_node = stack_last_node(*b);
		new_first_node = stack_new(last_node->number);
		stack_add_front(b, new_first_node);
		last_node->previous->next = NULL;
		free(last_node);
	}
	ft_printf("rrr\n");
}
