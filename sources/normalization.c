/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/19 16:41:53 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*normalization(char **argv, int nbr_of_elements)
{
	int	*normalized;
	int	index;
	int	i;
	int	j;

	i = 1;
	normalized = malloc((sizeof(int) * (nbr_of_elements)));
	while (i <= nbr_of_elements)
	{
		j = 1;
		index = 0;
		while (j <= nbr_of_elements)
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				index++;
			j++;
		}
		normalized[i - 1] = index;
		i++;
	}
	return (normalized);
}
