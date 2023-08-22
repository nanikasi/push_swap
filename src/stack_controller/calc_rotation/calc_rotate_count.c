#include "../../importer.h"

int	calc_rotate_count_a2b(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = rrarrb_b(a, b, a->number);
	while (tmp)
	{
		if (i > rarb_b(a, b, tmp->number))
			i = rarb_b(a, b, tmp->number);
		if (i > rrarrb_b(a, b, tmp->number))
			i = rrarrb_b(a, b, tmp->number);
		if (i > rarrb_b(a, b, tmp->number))
			i = rarrb_b(a, b, tmp->number);
		if (i > rrarb_b(a, b, tmp->number))
			i = rrarb_b(a, b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

int	calc_rotate_count_b2a(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = rrarrb_a(a, b, b->number);
	while (tmp)
	{
		if (i > rarb_a(a, b, tmp->number))
			i = rarb_a(a, b, tmp->number);
		if (i > rrarrb_a(a, b, tmp->number))
			i = rrarrb_a(a, b, tmp->number);
		if (i > rarrb_a(a, b, tmp->number))
			i = rarrb_a(a, b, tmp->number);
		if (i > rrarb_a(a, b, tmp->number))
			i = rrarb_a(a, b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}
