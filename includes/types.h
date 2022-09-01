/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:38 by acesar-l          #+#    #+#             */
/*   Updated: 2022/09/01 21:09:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct s_stack
{
	int		number;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

typedef struct s_data
{
	int		nbr_of_elements;
	t_bool		stack_allocated;
	t_stack		**stack_a;
	t_stack		**stack_b;
}	t_data;

#endif
