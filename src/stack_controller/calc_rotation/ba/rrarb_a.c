/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrarb_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:32:41 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:32:41 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../importer.h"

int	rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_where_to_push_a(a, c))
		i = get_stack_size(a) - find_where_to_push_a(a, c);
	i = get_index(b, c) + i;
	return (i);
}
