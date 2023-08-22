#include "../importer.h"

t_stack	*create_stack(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		put_error();
	new->number = content;
	new->next = NULL;
	return (new);
}
