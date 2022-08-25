/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:24:17 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/25 21:15:37 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void normalization(int numbers, char **values, int total)
{
	int i;
	int j;

	i = 1;
	int indice;
	while (i <= total)
	{
		j = 1;
		indice = 0;
		while (j <= total)
		{
			if(ft_atoi(values[i]) > ft_atoi(values[j])){
				indice++;

				ft_printf("%s | INDICE = %d\n", values[i], indice);
			}
			j++;
		}
		i++;
	}
	ft_printf("TOTAL:%d\n", i);
}