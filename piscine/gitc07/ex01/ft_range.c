/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:33 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/12 15:13:26 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	a;

a = 0;
tab = malloc (sizeof(int) * (max - min) + 1);
	if (tab == NULL)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		tab[a] = min;
		min++;
		a++;
	}
	return (tab);
}
