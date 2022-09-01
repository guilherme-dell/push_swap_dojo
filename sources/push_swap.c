/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/01 21:51:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void printthe_stacks(t_data *data);

int	main(int argc, char **argv)
{
	t_data	*data;
	int		*normalized_elements;

	data = malloc(sizeof(t_data));
	initialize(data, argc, argv);
	equals_numbers(data, argv, data->nbr_of_elements);
	normalized_elements = normalization(argv, data->nbr_of_elements);
	fill_stacks(data, normalized_elements);
	printthe_stacks(data);
	run_push(data, PB);
	printthe_stacks(data);
	run_swap(data, SS);
	printthe_stacks(data);
	run_reverse_rotate(data, RRA);
	printthe_stacks(data);
	run_push(data, PB);
	printthe_stacks(data);
	run_rotate(data, RA);
	printthe_stacks(data);
	run_push(data, PA);
	printthe_stacks(data);
	clear_stack(data->stack_a);
	clear_stack(data->stack_b);
	free(data);
}

static void printthe_stacks(t_data *data)
{
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\nSTACK B");
	print_stack_elements(*data->stack_b);
	ft_printf("\n");
}
