/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equals_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:06:03 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/28 00:32:06 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	equals_numbers(char **values, int nbr_of_elements)
{
	int	i;
	int	j;
	int	*normalized;

	i = 1;
	while (i <= nbr_of_elements)
	{
		j = i;
		while (j < nbr_of_elements)
		{
			if (ft_atoi(values[i]) == ft_atoi(values[j+1])){
				ft_printf("FOUND NUMBER --> %s\n", values[i]);
			}
			j++;
		}
		i++;
	}
}
