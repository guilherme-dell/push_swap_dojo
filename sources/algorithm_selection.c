/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:24 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/16 22:09:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sorting(t_data *data);

void	algorithm_selection(t_data *data)
{
	stack_sorting(data);
	if (stack_size(data->stack_a) == 3)
		sort_three_elements(data);
	else if (stack_size(data->stack_a) == 5)
		sort_five_elements(data);
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
