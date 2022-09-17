/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:33:49 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 00:52:05 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	ra(t_stack **a)
{
	t_stack	*new_last_node;
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*a == NULL)
		return ;
	if (stack_size(a) < 2)
		return ;
	new_last_node = stack_new((*a)->number);
	last_node = stack_last_node(*a);
	last_node->next = new_last_node;
	new_last_node->previous = last_node;
	new_first_node = (*a)->next;
	free(*a);
	*a = new_first_node;
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	t_stack	*new_last_node;
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*b == NULL)
		return ;
	if (stack_size(b) < 2)
		return ;
	new_last_node = stack_new((*b)->number);
	last_node = stack_last_node(*b);
	last_node->next = new_last_node;
	new_last_node->previous = last_node;
	new_first_node = (*b)->next;
	free(*b);
	*b = new_first_node;
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*new_last_node;
	t_stack	*last_node;
	t_stack	*new_first_node;

	if (*a != NULL && stack_size(a) >= 2)
	{
		new_last_node = stack_new((*a)->number);
		last_node = stack_last_node(*a);
		last_node->next = new_last_node;
		new_last_node->previous = last_node;
		new_first_node = (*a)->next;
		free(*a);
		*a = new_first_node;
	}
	if (*b != NULL && stack_size(b) >= 2)
	{
		new_last_node = stack_new((*b)->number);
		last_node = stack_last_node(*b);
		last_node->next = new_last_node;
		new_last_node->previous = last_node;
		new_first_node = (*b)->next;
		free(*b);
		*b = new_first_node;
	}
	ft_printf("rr\n");
}
