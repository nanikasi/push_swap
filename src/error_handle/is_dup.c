/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:34:26 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:34:26 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../importer.h"

int	is_dup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
