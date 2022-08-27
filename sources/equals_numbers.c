/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equals_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:06:03 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/28 00:06:39 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*equals_numbers(char **values, int nbr_of_elements)
{
	int	i;
	int	j;
	int	*normalized;
	int	index;

	i = 1;
	normalized = malloc((sizeof(int) * nbr_of_elements));
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
		normalized[i] = index;
		i++;
	}
	return (normalized);
}