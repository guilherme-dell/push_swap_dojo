/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_clean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:34:58 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 01:40:26 by coder            ###   ########.fr       */
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
}

void	error(t_data *data, char *message)
{
	ft_printf(RED"Error\n"RESET);
	ft_printf(GREY"%s\n"RESET, message);
	free(data);
	exit(EXIT_FAILURE);
}
