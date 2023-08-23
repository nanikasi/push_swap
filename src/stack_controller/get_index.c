/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:34:02 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:34:02 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../importer.h"

int	get_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->number != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}
