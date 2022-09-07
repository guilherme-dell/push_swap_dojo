/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:42:40 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/06 08:47:30 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_data *data, t_stack **a);
void	sort_three(t_data *data, t_stack **a);

void	sort_three(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	if (sorting(a) == true)
		return ;
	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	if (smaller == (*a)->number)
	{
		run_reverse_rotate(data, RRA);
		run_swap(data, SA);
	}
	else if (smaller == (*a)->next->next->number)
	{
		if (greater == (*a)->number)
		{
			run_rotate(data, RA);
			run_swap(data, SA);
		}
		else
			run_reverse_rotate(data, RRA);
	}
	else if (greater == (*a)->next->next->number)
		run_swap(data, SA);
	else
		run_rotate(data, RA);
}

void	sort_five(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	if (sorting(a) == true)
		return ;
	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	if (stack_size_until_element(a, greater) < 3)
	{
		while ((*a)->number != greater)
			run_rotate(data, RA);
	}
	else
	{
		while ((*a)->number != greater)
			run_reverse_rotate(data, RRA);
	}
	run_push(data, PB);
	if (stack_size_until_element(a, smaller) < 3)
	{
		while ((*a)->number != smaller)
			run_rotate(data, RA);
	}
	else
	{
		while ((*a)->number != smaller)
			run_reverse_rotate(data, RRA);
	}
	run_push(data, PB);
	sort_three(data, a);
	run_push(data, PA);
	run_push(data, PA);
	run_rotate(data, RA);
}
