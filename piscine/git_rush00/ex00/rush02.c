/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:32:04 by lquintar          #+#    #+#             */
/*   Updated: 2023/09/24 11:30:50 by lquintar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char var);

void	affichage(int i, int j, int x, int y)
{
	while (j != y)
	{
		while (i != x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				ft_putchar('A');
			else if ((i > 0 && i < x - 1) && (j == 0 || j == y - 1))
				ft_putchar('B');
			else if ((i == 0 && j == y - 1) || (j == y - 1 && i == x - 1))
				ft_putchar('C');
			else if (j != 0 && j < y - 1)
			{
				if (i == 0 || i == x - 1)
					ft_putchar('B');
				else
					write(1, " ", 1);
			}
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x < 1 || y < 1)
		return ;
	affichage(i, j, x, y);
}
