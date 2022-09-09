/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/09 20:42:31 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printthe_stacks(t_data *data);

int	main(int argc, char **argv)
{
	t_data	*data;
	int		*normalized_elements;
	t_bool	status_sorting;

	data = malloc(sizeof(t_data));
	initialize(data, argc, argv);
	equals_numbers(data, argv, data->nbr_of_elements);
	normalized_elements = normalization(argv, data->nbr_of_elements);
	fill_stacks(data, normalized_elements);
	printthe_stacks(data);
	run_push(data, PB);
	run_push(data, PB);
	run_push(data, PB);
	run_push(data, PB);
	run_push(data, PB);
	run_push(data, PB);
	run_push(data, PB);
	sort_seven_stack_b(data, data->stack_b);
	run_push(data, PA);
	run_push(data, PA);
	run_push(data, PA);
	run_push(data, PA);
	run_push(data, PA);
	run_push(data, PA);
	run_push(data, PA);
	//algorithm_selection(data);
	printthe_stacks(data);
	memory_clean(data);
}

static void	printthe_stacks(t_data *data)
{
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\nSTACK B");
	print_stack_elements(*data->stack_b);
	ft_printf("\n");
}
