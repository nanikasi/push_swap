#include "../importer.h"

t_stack	*stack_from_sub(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		stack_add(&a, create_stack(j));
		i++;
	}
	free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*stack_from(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc == 2)
		a = stack_from_sub(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi(argv[i]);
			stack_add(&a, create_stack(j));
			i++;
		}
	}
	return (a);
}
