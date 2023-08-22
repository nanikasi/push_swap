#include "../../../importer.h"

int	rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (get_index(b, c))
		i = get_stack_size(b) - get_index(b, c);
	i = find_where_to_push_a(a, c) + i;
	return (i);
}
