/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:42:40 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/16 23:37:55 by coder            ###   ########.fr       */
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
		run_reverse_rotate(data, RRA);
		run_swap(data, SA);
	}
	else if (smallest == (*data->stack_a)->next->next->number)
	{
		if (greatest == (*data->stack_a)->number)
		{
			run_rotate(data, RA);
			run_swap(data, SA);
		}
		else
			run_reverse_rotate(data, RRA);
	}
	else if (greatest == (*data->stack_a)->next->next->number)
		run_swap(data, SA);
	else
		run_rotate(data, RA);
}

void	sort_five_elements(t_data *data)
{
	int	greatest;
	int	smallest;

	greatest = find_greatest_nbr(data->stack_a);
	smallest = find_smallest_nbr(data->stack_a);
	if (stack_size_until_element(data->stack_a, greatest) < 3)
		while ((*data->stack_a)->number != greatest)
			run_rotate(data, RA);
	else
		while ((*data->stack_a)->number != greatest)
			run_reverse_rotate(data, RRA);
	run_push(data, PB);
	if (stack_size_until_element(data->stack_a, smallest) < 3)
		while ((*data->stack_a)->number != smallest)
			run_rotate(data, RA);
	else
		while ((*data->stack_a)->number != smallest)
			run_reverse_rotate(data, RRA);
	run_push(data, PB);
	sort_three_elements(data);
	run_push(data, PA);
	run_push(data, PA);
	run_rotate(data, RA);
}
