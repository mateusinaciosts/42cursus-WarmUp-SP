/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:37:24 by matsanto          #+#    #+#             */
/*   Updated: 2023/04/25 16:45:06 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	total;
	int	counter;
	int	*my_array;

	if (min >= max)
		return (0);
	counter = 0;
	total = max - min;
	my_array = malloc((total + 1) * sizeof(int));
	while (min <= max)
	{
		my_array[counter++] = min;
		min++;
	}
	return (my_array);
}
