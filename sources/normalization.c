/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/17 00:00:58 by coder            ###   ########.fr       */
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
	while (i < nbr_of_elements)
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
