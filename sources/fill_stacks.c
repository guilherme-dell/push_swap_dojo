/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:33 by coder             #+#    #+#             */
/*   Updated: 2022/08/29 09:24:03 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stacks(t_data *data, int *normalized_elements);
void	free_vector(t_data *data, int **normalized_elements);

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
	free(normalized_elements);
}
