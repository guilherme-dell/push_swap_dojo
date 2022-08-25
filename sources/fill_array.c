/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:33 by coder             #+#    #+#             */
/*   Updated: 2022/08/25 23:05:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		fill_stacks(t_data *data, char *normalized_elements);

void		fill_stacks(t_data *data, char *normalized_elements)
{
    int i;

    i = 0;
    data->stack_a = malloc(sizeof(t_stack **));
    data->stack_b = malloc(sizeof(t_stack **));
    *data->stack_a = stack_new(normalized_elements[i]);
    i++;
    while (normalized_elements[i])
    {
        stack_add_back(data->stack_a, stack_new(normalized_elements[i]));
		print_stack_elements(*data->stack_a);
        i++;
    }
}
