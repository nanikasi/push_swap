#include "../../../importer.h"

int	rarb_b(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_where_to_push_b(b, c);
	if (i < get_index(a, c))
		i = get_index(a, c);
	return (i);
}
