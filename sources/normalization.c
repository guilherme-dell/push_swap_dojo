/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/02 01:36:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*normalization(char **values, int nbr_of_elements)
{
	int	i;
	int	j;
	int	*normalized;
	int	index;

	i = 1;
	normalized = malloc((sizeof(int) * (nbr_of_elements)));
	while (i <= nbr_of_elements)
	{
		j = 1;
		index = 0;
		while (j <= nbr_of_elements)
		{
			if (ft_atoi(values[i]) > ft_atoi(values[j]))
				index++;
			j++;
		}
		normalized[i - 1] = index;
		i++;
	}
	return (normalized);
}
