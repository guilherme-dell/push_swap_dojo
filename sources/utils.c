/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:30:10 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/29 09:23:28 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_elements(t_stack *stack);
t_stack	*stack_new(int number);
void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*stack_last_node(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
void	clear_stack(t_stack **stack);

void	print_stack_elements(t_stack *stack)
{
	int	length;

	length = 0;
	ft_printf("Content | ");
	while (stack)
	{
		ft_printf("%d | ", stack->number);
		length++;
		stack = stack->next;
	}
	ft_printf("\nLength  | %d \n\n", length);
}

t_stack	*stack_new(int number)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->number = number;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	new->previous = NULL;
	new->next = *stack;
	*stack = new;
}

t_stack	*stack_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	if (!*stack)
		*stack = new;
	else
	{
		new->previous = stack_last_node(*stack);
		stack_last_node(*stack)->next = new;
	}
}

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
