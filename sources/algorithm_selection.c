/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:24 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/09 19:53:15 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sorting(t_data *data);

void	algorithm_selection(t_data *data)
{
	stack_sorting(data);
	if (stack_size(data->stack_a) == 3)
		sort_three(data, data->stack_a);
	else if (stack_size(data->stack_a) == 5)
		sort_five(data, data->stack_a);
	else if (stack_size(data->stack_a) == 7)
		sort_seven(data, data->stack_a);
	else
		radix(data);
}

void	stack_sorting(t_data *data)
{
	if (sorting(data->stack_a) == true)
	{
		memory_clean(data);
		exit (0);
	}
}
