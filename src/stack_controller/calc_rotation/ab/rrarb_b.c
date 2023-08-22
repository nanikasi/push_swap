#include "../../../importer.h"

int	rrarb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (get_index(a, c))
		i = get_stack_size(a) - get_index(a, c);
	i = find_where_to_push_b(b, c) + i;
	return (i);
}
