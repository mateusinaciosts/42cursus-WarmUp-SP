/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 09:22:49 by matsanto          #+#    #+#             */
/*   Updated: 2023/04/26 09:37:25 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_char(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		count;
	int		limit;
	char	*copysrc;

	count = 0;
	limit = size_char(src);
	copysrc = malloc(limit * sizeof(char));
	while (src[count] != '\0')
	{
		copysrc[count] = src[count];
		count++;
	}
	copysrc[count] = '\0';
	return (copysrc);
}
