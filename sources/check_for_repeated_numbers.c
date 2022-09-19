/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_repeated_numbers.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:06:03 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/19 16:50:33 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_for_repeated_numbers(t_data *data, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i <= data->nbr_of_elements)
	{
		j = i + 1;
		while (j < data->nbr_of_elements)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				error(data, "Repeated numbers are not allowed.");
			j++;
		}
		i++;
	}
}
