/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:56:49 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:15:16 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*a_first_node;

	if (*b == NULL)
		return ;
	a_first_node = stack_new((*b)->number);
	stack_add_front(a, a_first_node);
	stack_remove_first_node(b);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*b_first_node;

	if (*a == NULL)
		return ;
	b_first_node = stack_new((*a)->number);
	stack_add_front(b, b_first_node);
	stack_remove_first_node(a);
	ft_printf("pb\n");
}
