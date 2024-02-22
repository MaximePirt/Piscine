/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:59 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/12 00:31:32 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	array;
	int	i;

i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
*range = malloc (sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
array = i;
	return (array);
}
