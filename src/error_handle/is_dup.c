#include "../importer.h"

int	is_dup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}