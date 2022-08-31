/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:41 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/31 20:30:09 by coder            ###   ########.fr       */
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
	fill_stacks(data, normalized_elements);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\nSTACK B");
	print_stack_elements(*data->stack_b);
	ft_printf("\n");
	opt_sa(*data->stack_a);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\n");
	opt_ra(data->stack_a);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\n");
	opt_ra(data->stack_a);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\n");
	opt_rra(data->stack_a);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);ft_printf("\n");
	opt_rra(data->stack_a);
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	clear_stack(data->stack_a);
	clear_stack(data->stack_b);
	free(data);
}
