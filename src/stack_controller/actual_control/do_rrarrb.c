/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrarrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:32:20 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:32:20 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../importer.h"

int	do_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c && find_where_to_push_b(*b, c) > 0)
			rrr(a, b, 0);
		while ((*a)->number != c)
			rra(a, 0);
		while (find_where_to_push_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->number != c && find_where_to_push_a(*a, c) > 0)
			rrr(a, b, 0);
		while ((*b)->number != c)
			rrb(b, 0);
		while (find_where_to_push_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}
