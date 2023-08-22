#include "../importer.h"

void	stack_add(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(get_last(*stack))->next = stack_new;
}
