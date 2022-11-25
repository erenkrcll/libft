/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaracil <ekaracil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:51:55 by ekaracil          #+#    #+#             */
/*   Updated: 2022/11/17 17:21:12 by ekaracil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	long	n;

	res = 1;
	n = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			res = -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		n = *str - 48 + (n * 10);
		str++;
		if (n * res < -2147483648)
			return (0);
		else if (n * res > 2147483647)
			return (-1);
	}
	return (n * res);
}
