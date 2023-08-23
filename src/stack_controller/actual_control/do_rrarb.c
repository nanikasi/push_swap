/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrarb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:32:17 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:32:17 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../importer.h"

int	do_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c)
			rra(a, 0);
		while (find_where_to_push_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (find_where_to_push_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->number != c)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}
