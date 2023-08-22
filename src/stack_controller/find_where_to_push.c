#include "../importer.h"

int	find_where_to_push_b(t_stack *stack_b, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > stack_b->number && nbr_push < get_last(stack_b)->number)
		i = 0;
	else if (nbr_push > stack_max(stack_b) || nbr_push < stack_min(stack_b))
		i = get_index(stack_b, stack_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->number < nbr_push || tmp->number > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	find_where_to_push_a(t_stack *stack_a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push < stack_a->number && nbr_push > get_last(stack_a)->number)
		i = 0;
	else if (nbr_push > stack_max(stack_a) || nbr_push < stack_min(stack_a))
		i = get_index(stack_a, stack_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->number > nbr_push || tmp->number < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
