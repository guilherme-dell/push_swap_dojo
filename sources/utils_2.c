/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:32:47 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/08/29 09:33:31 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_stack(t_stack **stack)
{
	t_stack	*ptr_i;
	t_stack	*next;

	if (!*stack)
		return ;
	ptr_i = *stack;
	while (ptr_i)
	{
		next = ptr_i->next;
		free(ptr_i);
		ptr_i = next;
	}
	*stack = NULL;
	free(stack);
}
