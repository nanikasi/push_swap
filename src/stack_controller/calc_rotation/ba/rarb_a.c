/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rarb_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:32:35 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:32:35 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../importer.h"

int	rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_where_to_push_a(a, c);
	if (i < get_index(b, c))
		i = get_index(b, c);
	return (i);
}
