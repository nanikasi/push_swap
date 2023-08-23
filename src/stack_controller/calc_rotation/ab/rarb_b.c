/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rarb_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:32:25 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:32:25 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../importer.h"

int	rarb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_where_to_push_b(b, c);
	if (i < get_index(a, c))
		i = get_index(a, c);
	return (i);
}
