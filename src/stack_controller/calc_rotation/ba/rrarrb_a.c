#include "../../../importer.h"

int	rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_where_to_push_a(a, c))
		i = get_stack_size(a) - find_where_to_push_a(a, c);
	if ((i < (get_stack_size(b) - get_index(b, c))) && get_index(b, c))
		i = get_stack_size(b) - get_index(b, c);
	return (i);
}
