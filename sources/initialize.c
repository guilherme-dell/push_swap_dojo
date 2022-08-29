/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:41:30 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/29 09:35:36 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize(t_data *data, int argc, char **argv);
void	init_data(t_data *data, int argc);
void	ft_isinteger(t_data *data, int argc, char **argv);
int		find_last_leading_zero(char *number);
t_bool	is_outside_integers_range(char *number);

void	initialize(t_data *data, int argc, char **argv)
{
	init_data(data, argc);
	ft_isinteger(data, argc, argv);
}

void	init_data(t_data *data, int argc)
{
	data->nbr_of_elements = argc - 1;
	data->stack_allocated = false;
}

void	ft_isinteger(t_data *data, int argc, char **argv)
{
	int	arg;
	int	i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		if (argv[arg][0] == '\0')
			error(data, "Null argument");
		while (argv[arg][i])
		{
			if (ft_isdigit(argv[arg][i]) == false)
				if (i != 0)
					error(data, "Contains not integers as arguments");
				else if (i == 0 && argv[arg][i] != '-')
					error(data, "Contains not integers as arguments");
			if (ft_strlen(&argv[arg][find_last_leading_zero(argv[arg])]) > 9)
				if (is_outside_integers_range(argv[arg]) == true)
					error(data, "Integer over the int's range");
			i++;
		}
		arg++;
	}
}

int	find_last_leading_zero(char *number)
{
	int	i;

	i = 0;
	if (number[0] == '-')
		i++;
	while (number[i] == '0')
		i++;
	return (i);
}

t_bool	is_outside_integers_range(char *number)
{
	int	i;

	i = find_last_leading_zero(number);
	if (ft_strlen(&number[i]) > 10)
		return (true);
	if (number[i++] <= '2')
		if (number[i++] <= '1')
			if (number[i++] <= '4')
				if (number[i++] <= '7')
					if (number[i++] <= '4')
						if (number[i++] <= '8')
							if (number[i++] <= '3')
								if (number[i++] <= '6')
									if (number[i++] <= '4')
										if ((number[i] <= '7') \
											|| (number[0] == '-') \
											&& (number[i] == '8'))
											return (false);
	return (true);
}
