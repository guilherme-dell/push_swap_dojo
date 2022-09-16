/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:24 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/17 01:18:11 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_selection(t_data *data);

void	algorithm_selection(t_data *data)
{
	if (is_sorted(data->stack_a) == true)
		memory_clean(data);
	if (stack_size(data->stack_a) == 3)
		sort_three_elements(data);
	else if (stack_size(data->stack_a) == 5)
		sort_five_elements(data);
	else
		radix(data);
}
