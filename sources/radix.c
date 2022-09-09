/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/09 20:03:07 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printthe_stacks(t_data *data);

void	radix(t_data *data)
{
	int	shift;
	int	count;
	int	counter_push_b;

	counter_push_b = 0;
	shift = 0;
	while (!sorting(data->stack_a))
	{
		count = 0;
		while (count < data->nbr_of_elements)
		{
			if (((*data->stack_a)->number >> shift) & 1)
				run_rotate(data, RA);
			else{
				run_push(data, PB);
				counter_push_b++;
				if (counter_push_b == 7){
					sort_seven(data, data->stack_b);
					counter_push_b = 0;
				}
			}
			count++;
		}
		while ((*data->stack_b))
			run_push(data, PA);
		shift++;
	}
}


void	sort_seven_stack_b(t_data *data, t_stack **a)
{
	int	greater;
	int	smaller;

	if (sorting(a) == true)
		return ;
	greater = find_greater_nbr(a);
	smaller = find_smaller_nbr(a);
	put_element_on_top(data, a, greater);
	run_push(data, PB);
	put_element_on_top(data, a, smaller);
	run_push(data, PB);
	sort_five(data, a);
	run_push(data, PA);
	run_push(data, PA);
	run_rotate(data, RA);
}