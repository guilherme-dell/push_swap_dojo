/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:16:51 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/09 20:41:25 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_stack_b(t_data *data, t_stack **a);
void	sort_three_stack_b(t_data *data, t_stack **a);
void	sort_seven_stack_b(t_data *data, t_stack **a);

void	sort_three_stack_b(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	if (greater == (*a)->number)
	{
		run_reverse_rotate(data, RRB);
		run_swap(data, SB);
	}
	else if (greater == (*a)->next->next->number)
	{
		if (smaller == (*a)->number)
		{
			run_rotate(data, RB);
			run_swap(data, SB);
		}
		else
			run_reverse_rotate(data, RRB);
	}
	else if (smaller == (*a)->next->next->number)
		run_swap(data, SB);
	else
		run_rotate(data, RB);
}

void	sort_five_stack_b(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	if (sorting(a) == true)
		return ;
	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	put_element_on_top_b(data, a, smaller);
	run_push(data, PA);
	put_element_on_top_b(data, a, greater);
	run_push(data, PA);
	sort_three_stack_b(data, a);
	run_push(data, PB);
	run_push(data, PB);
	run_rotate(data, RB);
}

void	sort_seven_stack_b(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	if (sorting(a) == true)
		return ;
	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	put_element_on_top_b(data, a, smaller);
	run_push(data, PA);
	put_element_on_top_b(data, a, greater);
	run_push(data, PA);
	sort_five_stack_b(data,a);
	run_push(data, PB);
	run_push(data, PB);
	run_rotate(data, RB);
}