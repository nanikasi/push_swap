#include "../importer.h"

int	get_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->number != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}
