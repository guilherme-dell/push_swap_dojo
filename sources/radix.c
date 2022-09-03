/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:11 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/02 22:40:40 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void radix(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*lista_a;
	t_stack	*lista_b;

	lista_a	= *stack_a;
	lista_b	= *stack_b;

	int shift;
	shift = 1;

	while (sorting(stack_a) != false)
	{
		while ((lista_a->number >> shift) & 1)
		{
			if((lista_a->number >> shift) & 1 == 1)
				operation_push(stack_a, stack_b);
			else
				operation_rotate(stack_a);
		}
		while (lista_b->next)
			operation_push(stack_b, stack_a);
		shift++;

	}

}
