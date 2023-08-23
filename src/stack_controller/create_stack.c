/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:33:50 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:33:50 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../importer.h"

t_stack	*create_stack(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		put_error();
	new->number = content;
	new->next = NULL;
	return (new);
}
