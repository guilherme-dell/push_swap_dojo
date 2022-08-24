/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:41:30 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/24 15:31:53 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initialize(t_data *data, int argc, char **argv);
void	init_data(t_data *data);
void	check_arguments(t_data *data, int argc, char **argv);

void	initialize(t_data *data, int argc, char **argv)
{
	init_data(data);
	check_arguments(data, argc, argv);
	//allocate_elements_on_stack_a
}

void	init_data(t_data *data)
{
	data->stack_allocated = false;
}

void	check_arguments(t_data *data, int argc, char **argv)
{
	int arg;
	int i;

	i = 0;
	arg = 1;
	data->stack_a = malloc(sizeof(t_stack **));
	
	while (arg < argc)
	{
		if(argv[arg][i])
		{
			while (argv[arg][i])
			{
				if (ft_isdigit(argv[arg][i++]) == false && argv[arg][0] != '-')
				error(data, "Contains not integers as arguments");
			}
			stack_add_back(data->stack_a, stack_new(ft_atoi(argv[arg])));
			print_stack_elements(*data->stack_a);
		}
		arg++;
		i = 0;
	}
}

