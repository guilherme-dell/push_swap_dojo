/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:33 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/19 16:50:47 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stacks(t_data *data, int *normalized_elements)
{
	int	i;

	i = 0;
	data->stack_a = malloc(sizeof(t_stack **));
	data->stack_b = malloc(sizeof(t_stack **));
	*data->stack_a = stack_new(normalized_elements[i]);
	i++;
	while (i < data->nbr_of_elements)
	{
		stack_add_back(data->stack_a, stack_new(normalized_elements[i]));
		i++;
	}
	*data->stack_b = NULL;
	data->is_stack_allocated = true;
	free(normalized_elements);
}
