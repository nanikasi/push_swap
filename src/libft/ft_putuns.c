/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:07:14 by nanakani          #+#    #+#             */
/*   Updated: 2023/02/06 15:07:14 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive(unsigned int n, ssize_t *length, size_t base,
				char *format);

ssize_t	ft_putuns(char *format, unsigned int nbr)
{
	ssize_t	length;
	size_t	base;

	length = 0;
	base = ft_strlen(format);
	recursive(nbr, &length, base, format);
	return (length);
}

static void	recursive(unsigned int n, ssize_t *length, size_t base,
		char *format)
{
	if (n < base)
	{
		write(1, &format[n], 1);
		(*length)++;
	}
	else
	{
		recursive(n / base, length, base, format);
		recursive(n % base, length, base, format);
	}
}
