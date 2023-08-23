/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:33:36 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:33:36 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../importer.h"

int	is_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->number;
	while (stack_a)
	{
		if (i > stack_a->number)
			return (0);
		i = stack_a->number;
		stack_a = stack_a->next;
	}
	return (1);
}
