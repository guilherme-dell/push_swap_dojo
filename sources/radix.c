/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/17 00:56:12 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_data *data)
{
	int	shift;
	int	count;

	shift = 0;
	while (is_sorted(data->stack_a) == false)
	{
		count = 0;
		while (count < data->nbr_of_elements)
		{
			if (((*data->stack_a)->number >> shift) & 1)
				ra(data->stack_a);
			else
				pb(data->stack_a, data->stack_b);
			count++;
		}
		while ((*data->stack_b))
			pa(data->stack_a, data->stack_b);
		shift++;
	}
}
