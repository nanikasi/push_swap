#include "../../importer.h"

int	do_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c && find_where_to_push_b(*b, c) > 0)
			rr(a, b, 0);
		while ((*a)->number != c)
			ra(a, 0);
		while (find_where_to_push_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->number != c && find_where_to_push_a(*a, c) > 0)
			rr(a, b, 0);
		while ((*b)->number != c)
			rb(b, 0);
		while (find_where_to_push_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}
