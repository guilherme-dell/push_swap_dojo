/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/25 23:53:29 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char  *normalization(char **values, int nbr_of_elements)
{
	int i;
	int j;
	char *normalized;
	int index;
	
	i = 1;
	normalized = malloc((sizeof(char) * nbr_of_elements) + 1);
	while (i <= nbr_of_elements)
	{
		j = 1;
		index = 0;
		while (j <= nbr_of_elements)
		{
			if(ft_atoi(values[i]) > ft_atoi(values[j]))
			{
				index++;
			}
			j++;
		}
		normalized[i - 1] = index;
		ft_printf("%d | %d | %d\n", normalized[i], i, index);
		i++;
	}
	normalized[i - 1] = '\0';
	ft_putstr_fd(normalization, 1);
	return (normalized);
}
