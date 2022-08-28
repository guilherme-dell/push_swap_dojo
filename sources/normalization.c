/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/28 03:14:33 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_vetor(int *vetor, int nbr_of_elements)
{
	int	i;

	i = 0;
	while (i < nbr_of_elements)
	{
		ft_printf("%d\n", vetor[i]);
		i++;
	}
}

int	*normalization(char **values, int nbr_of_elements)
{
	int	i;
	int	j;
	int	*normalized;
	int	index;

	i = 1;
	ft_printf("Number of elements - %d\n", nbr_of_elements);
	normalized = malloc((sizeof(int) * (nbr_of_elements)));
	while (i <= nbr_of_elements)
	{
		j = 1;
		index = 0;
		while (j <= nbr_of_elements)
		{
			if(ft_atoi(values[i]) > ft_atoi(values[j]))
				index++;
			j++;
		}
		normalized[i - 1] = index;
		i++;
	}
	return (normalized);
}
