/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/03 01:09:01 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static	void	printthe_stacks(t_data *data);


void radix(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	t_stack	*lista_a;
	t_stack	*lista_b;

	lista_a	= *stack_a;
	lista_b	= *stack_b;

	int shift;
	int count;

	shift = 0;

	while (!sorting(stack_a))
	{
		count = 0;
		while (count < data->nbr_of_elements)
		{
			if ((lista_a->number >> shift) & 1)
				run_rotate(data, RA);
			else
				run_push(data, PB);
			count++;

		}
		while (*stack_b){
			run_push(data, PA);
		}
		printthe_stacks(data);
		shift++;
	}
}


static void	printthe_stacks(t_data *data)
{
	ft_printf("\nSTACK A");
	print_stack_elements(*data->stack_a);
	ft_printf("\nSTACK B");
	print_stack_elements(*data->stack_b);
	ft_printf("\n");
}