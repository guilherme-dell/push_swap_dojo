/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:28:12 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:30:41 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
static void	swap_values(int *a, int *b);

void	sa(t_stack **a)
{
	if (*a == NULL)
		return ;
	if (stack_size(a) < 2)
		return ;
	swap_values(&((*a)->number), &((*a)->next->number));
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	if (*b == NULL)
		return ;
	if (stack_size(b) < 2)
		return ;
	swap_values(&((*b)->number), &((*b)->next->number));
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	if (*a != NULL && stack_size(a) >= 2)
		swap_values(&((*a)->number), &((*a)->next->number));
	if (*b != NULL && stack_size(b) >= 2)
		swap_values(&((*b)->number), &((*b)->next->number));
	ft_printf("ss\n");
}

static void	swap_values(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
