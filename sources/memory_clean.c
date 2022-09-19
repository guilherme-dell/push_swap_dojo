/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_clean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:34:58 by coder             #+#    #+#             */
/*   Updated: 2022/09/19 16:37:36 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_data *data, char *message);
void	memory_clean(t_data *data);

void	memory_clean(t_data *data)
{
	clear_stack(data->stack_a);
	clear_stack(data->stack_b);
	free(data);
	exit(0);
}

void	error(t_data *data, char *message)
{
	ft_printf(RED"Error\n"RESET);
	ft_printf(GREY"%s\n"RESET, message);
	if (data->is_stack_allocated == true)
	{
		clear_stack(data->stack_a);
		clear_stack(data->stack_b);
	}
	free(data);
	exit(EXIT_FAILURE);
}
