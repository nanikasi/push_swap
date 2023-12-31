/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:34:29 by nanakani          #+#    #+#             */
/*   Updated: 2023/08/23 17:34:29 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../importer.h"

int	is_num_str(const char *str)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		return (0);
	return (1);
}

int	is_valid(int argc, char **argv)
{
	char	**tmp;
	int		i;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		if (tmp == NULL || tmp[0] == NULL)
			return (0);
		i = !is_num_str(*tmp);
		free_str(tmp);
		free(tmp);
		if (i)
			return (0);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (!is_num_str(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
