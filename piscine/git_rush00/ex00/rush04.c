/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiwa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:57:54 by mhiwa             #+#    #+#             */
/*   Updated: 2023/09/24 11:35:04 by mhiwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char var)
{
	write (1, &var, 1);
}*/
void	ft_putchar(char var);

void	affichage(int i, int j, int x, int y)
{
	while (j != y)
	{
		while (i != x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('A');
			else if ((i > 0 && i < x - 1) && (j == 0 || j == y - 1))
				ft_putchar('B');
			else if ((i == x - 1 && j == 0) || (j == y - 1 && i == 0))
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

/*int	main(void)
{
	rush (5, 5);
	return (0);
}*/
