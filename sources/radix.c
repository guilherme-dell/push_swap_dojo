/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/09 19:53:08 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printthe_stacks(t_data *data);

void	radix(t_data *data)
{
	int	shift;
	int	count;

	shift = 0;
	while (!sorting(data->stack_a))
	{
		count = 0;
		while (count < data->nbr_of_elements)
		{
			if (((*data->stack_a)->number >> shift) & 1)
				run_rotate(data, RA);
			else
				run_push(data, PB);
			count++;
		}
		while ((*data->stack_b))
			run_push(data, PA);
		shift++;
	}
}
