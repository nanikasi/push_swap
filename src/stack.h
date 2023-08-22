
#ifndef STACK_H
# define STACK_H

typedef struct s_stack
{
	long			number;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

#endif