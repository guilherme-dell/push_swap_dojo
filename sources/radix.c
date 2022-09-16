/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/16 21:49:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
