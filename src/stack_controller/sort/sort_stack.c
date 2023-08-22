#include "../../importer.h"

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (get_stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (get_stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (get_stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		sort_b_by_3(stack_a, &stack_b);
	if (!is_sorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

t_stack	**sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = calc_rotate_count_b2a(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb_a(*stack_a, *stack_b, tmp->number))
				i = do_rarb(stack_a, stack_b, tmp->number, 'b');
			else if (i == rarrb_a(*stack_a, *stack_b, tmp->number))
				i = do_rarrb(stack_a, stack_b, tmp->number, 'b');
			else if (i == rrarrb_a(*stack_a, *stack_b, tmp->number))
				i = do_rrarrb(stack_a, stack_b, tmp->number, 'b');
			else if (i == rrarb_a(*stack_a, *stack_b, tmp->number))
				i = do_rrarb(stack_a, stack_b, tmp->number, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	sort_stack(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (get_stack_size(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		i = get_index(*stack_a, stack_min(*stack_a));
		if (i < get_stack_size(*stack_a) - i)
		{
			while ((*stack_a)->number != stack_min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->number != stack_min(*stack_a))
				rra(stack_a, 0);
		}			
	}	
}
