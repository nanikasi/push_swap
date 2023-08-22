#include "../importer.h"

int	stack_min(t_stack *a)
{
	int		i;

	i = a->number;
	while (a)
	{
		if (a->number < i)
			i = a->number;
		a = a->next;
	}
	return (i);
}
