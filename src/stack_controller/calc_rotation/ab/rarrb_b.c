#include "../../../importer.h"

int	rarrb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_where_to_push_b(b, c))
		i = get_stack_size(b) - find_where_to_push_b(b, c);
	i = get_index(a, c) + i;
	return (i);
}
