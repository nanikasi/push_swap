/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:34:17 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:34:17 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../importer.h"

int	stack_max(t_stack *a)
{
	int		i;

	i = a->number;
	while (a)
	{
		if (a->number > i)
			i = a->number;
		a = a->next;
	}
	return (i);
}
