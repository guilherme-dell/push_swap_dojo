/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/09 20:35:06 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printthe_stacks(t_data *data);

static void	printthe_stacks(t_data *data)
{
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\nSTACK B");
	print_stack_elements(*data->stack_b);
	ft_printf("\n");
}

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
					printthe_stacks(data);
					sort_seven_stack_b(data, data->stack_b);
					printthe_stacks(data);
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

