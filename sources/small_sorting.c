/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:42:40 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/17 01:02:45 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_elements(t_data *data);
void	sort_three_elements(t_data *data);

void	sort_three_elements(t_data *data)
{
	int	greatest;
	int	smallest;

	greatest = find_greatest_nbr(data->stack_a);
	smallest = find_smallest_nbr(data->stack_a);
	if (smallest == (*data->stack_a)->number)
	{
		rra(data->stack_a);
		sa(data->stack_a);
	}
	else if (smallest == (*data->stack_a)->next->next->number)
	{
		if (greatest == (*data->stack_a)->number)
		{
			ra(data->stack_a);
			sa(data->stack_a);
		}
		else
			rra(data->stack_a);
	}
	else if (greatest == (*data->stack_a)->next->next->number)
		sa(data->stack_a);
	else
		ra(data->stack_a);
}

void	sort_five_elements(t_data *data)
{
	int	greatest;
	int	smallest;

	greatest = find_greatest_nbr(data->stack_a);
	smallest = find_smallest_nbr(data->stack_a);
	if (stack_size_until_element(data->stack_a, greatest) < 3)
		while ((*data->stack_a)->number != greatest)
			ra(data->stack_a);
	else
		while ((*data->stack_a)->number != greatest)
			rra(data->stack_a);
	pb(data->stack_a, data->stack_b);
	if (stack_size_until_element(data->stack_a, smallest) < 3)
		while ((*data->stack_a)->number != smallest)
			ra(data->stack_a);
	else
		while ((*data->stack_a)->number != smallest)
			rra(data->stack_a);
	pb(data->stack_a, data->stack_b);
	sort_three_elements(data);
	pa(data->stack_a, data->stack_b);
	pa(data->stack_a, data->stack_b);
	ra(data->stack_a);
}
