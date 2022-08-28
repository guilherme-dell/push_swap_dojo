/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equals_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:06:03 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/28 02:57:55 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	equals_numbers(t_data *data, char **values, int nbr_of_elements)
{
	int	i;
	int	j;

	i = 1;
	while (i <= nbr_of_elements)
	{
		j = i;
		while (j < nbr_of_elements)
		{
			if (ft_atoi(values[i]) == ft_atoi(values[j + 1]))
				error(data, "Repeated numbers are not allowed.");
			j++;
		}
		i++;
	}
}
