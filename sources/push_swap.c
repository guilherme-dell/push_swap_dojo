/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/19 16:41:48 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	int		*normalized_elements;

	data = malloc(sizeof(t_data));
	initialize(data, argc, argv);
	check_for_repeated_numbers(data, argv);
	normalized_elements = normalization(argv, data->nbr_of_elements);
	fill_stacks(data, normalized_elements);
	algorithm_selection(data);
	memory_clean(data);
}
