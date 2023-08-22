#include "../../importer.h"

void	sort_b_by_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (get_stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = calc_rotate_count_a2b(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb(*stack_a, *stack_b, tmp->number))
				i = do_rarb(stack_a, stack_b, tmp->number, 'a');
			else if (i == rrarrb(*stack_a, *stack_b, tmp->number))
				i = do_rrarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == rarrb(*stack_a, *stack_b, tmp->number))
				i = do_rarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == rrarb(*stack_a, *stack_b, tmp->number))
				i = do_rrarb(stack_a, stack_b, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}
