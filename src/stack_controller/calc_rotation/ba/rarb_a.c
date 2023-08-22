#include "../../../importer.h"

int	rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_where_to_push_a(a, c);
	if (i < get_index(b, c))
		i = get_index(b, c);
	return (i);
}
