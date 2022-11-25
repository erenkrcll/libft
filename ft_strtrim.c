/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaracil <ekaracil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:57:25 by ekaracil          #+#    #+#             */
/*   Updated: 2022/10/22 18:13:13 by ekaracil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ischar(char c, const char *set)
{
	while (*set != '\0')
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ischar(*s1, set) == 1 && s1)
		s1++;
	i = ft_strlen(s1);
	while (ischar(s1[i - 1], set) && i != 0)
		i--;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, i + 1);
	return (str);
}
