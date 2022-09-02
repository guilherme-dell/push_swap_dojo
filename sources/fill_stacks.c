/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:33 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 01:36:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stacks(t_data *data, int *normalized_elements);

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
	free(normalized_elements);
}
