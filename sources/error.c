/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:54:03 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/29 09:19:45 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_data *data, char *message)
{
	ft_printf(RED"Error\n"RESET);
	ft_printf(GREY"%s\n"RESET, message);
	//if (data->stack_alloced)
		//free(data);
	free(data);
	exit(EXIT_FAILURE);
}
