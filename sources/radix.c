/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/06 08:38:30 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	int	shift;
	int	count;

	shift = 0;
	while (!sorting(stack_a))
	{
		count = 0;
		while (count < data->nbr_of_elements)
		{
			if (((*stack_a)->number >> shift) & 1)
				run_rotate(data, RA);
			else
				run_push(data, PB);
			count++;
		}
		while (*stack_b){
			run_push(data, PA);
		}
		shift++;
	}
}
