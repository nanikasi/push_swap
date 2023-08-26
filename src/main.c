/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:29:24 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:29:24 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "importer.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		return (0);
	if (!is_valid(argc, argv))
		put_error();
	stack_a = stack_from(argc, argv);
	if (!stack_a || is_dup(stack_a))
	{
		free_stack(&stack_a);
		put_error();
	}
	if (!is_sorted(stack_a))
		sort_stack(&stack_a);
	free_stack(&stack_a);
	return (0);
}
