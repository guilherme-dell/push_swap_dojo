/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/01 00:11:29 by coder            ###   ########.fr       */
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
	opt_pb(data->stack_a, data->stack_b);
	printthe_stacks(data);
	opt_sa(*data->stack_a);
	printthe_stacks(data);
	opt_rra(data->stack_a);
	printthe_stacks(data);
	opt_pa(data->stack_b, data->stack_a);
	printthe_stacks(data);
	opt_ra(data->stack_a);
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
