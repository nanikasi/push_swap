

#ifndef IMPORTER_H
# define IMPORTER_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "stack.h"
# include "libft/libft.h"

// error handle
int	is_dup(t_stack *a);
int	is_valid(int argc, char **argv);
void	put_error(void);

// actual control
int	do_rarb(t_stack **a, t_stack **b, int c, char s);
int	do_rarrb(t_stack **a, t_stack **b, int c, char s);
int	do_rrarb(t_stack **a, t_stack **b, int c, char s);
int	do_rrarrb(t_stack **a, t_stack **b, int c, char s);

// calc rotation
int	rarb_b(t_stack *a, t_stack *b, int c);
int	rarrb_b(t_stack *a, t_stack *b, int c);
int	rrarb_b(t_stack *a, t_stack *b, int c);
int	rrarrb_b(t_stack *a, t_stack *b, int c);

int	rarb_a(t_stack *a, t_stack *b, int c);
int	rarrb_a(t_stack *a, t_stack *b, int c);
int	rrarb_a(t_stack *a, t_stack *b, int c);
int	rrarrb_a(t_stack *a, t_stack *b, int c);

int	calc_rotate_count_a2b(t_stack *a, t_stack *b);
int	calc_rotate_count_b2a(t_stack *a, t_stack *b);

// operations
void	pa(t_stack **a, t_stack **b, int j);
void	pb(t_stack **stack_a, t_stack **stack_b, int j);
void	ra(t_stack **a, int j);
void	rb(t_stack **b, int j);
void	rr(t_stack **a, t_stack **b, int j);
void	rra(t_stack **a, int j);
void	rrb(t_stack **b, int j);
void	rrr(t_stack **a, t_stack **b, int j);
void	sa(t_stack **a, int j);
void	sb(t_stack **b, int j);
void	ss(t_stack **a, t_stack **b, int j);

// sort
int	is_sorted(t_stack *stack_a);
void	sort_b_by_3(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(t_stack **stack_a);
void	sort_three(t_stack **stack_a);

t_stack	*create_stack(int content);
int	find_where_to_push_b(t_stack *stack_b, int nbr_push);
int	find_where_to_push_a(t_stack *stack_a, int nbr_push);
void	free_stack(t_stack **lst);
int	get_index(t_stack *a, int nbr);
t_stack	*get_last(t_stack *lst);
int	get_stack_size(t_stack *lst);
void	stack_add(t_stack **stack, t_stack *stack_new);
t_stack	*stack_from(int argc, char **argv);
int	stack_max(t_stack *a);
int	stack_min(t_stack *a);

// utils
void	free_str(char **lst);

#endif