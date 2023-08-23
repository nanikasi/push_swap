/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:33:47 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:33:47 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../importer.h"

void	sort_three(t_stack **stack_a)
{
	if (stack_min(*stack_a) == (*stack_a)->number)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (stack_max(*stack_a) == (*stack_a)->number)
	{
		ra(stack_a, 0);
		if (!is_sorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if (get_index(*stack_a, stack_max(*stack_a)) == 1)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}
