/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/30 19:04:15 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	int		*normalized_elements;

	data = malloc(sizeof(t_data));
	initialize(data, argc, argv);
	equals_numbers(data, argv, data->nbr_of_elements);
	normalized_elements = normalization(argv, data->nbr_of_elements);
	//print_vetor(normalized_elements, data->nbr_of_elements);
	fill_stacks(data, normalized_elements);
	print_stack_elements(*data->stack_a);
	clear_stack(data->stack_a);
	free(data->stack_b);
	free(data);
}
