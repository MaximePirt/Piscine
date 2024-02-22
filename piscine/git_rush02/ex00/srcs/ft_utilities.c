/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:09:27 by nle-roux          #+#    #+#             */
/*   Updated: 2023/10/08 17:18:27 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utilities.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

unsigned long	ft_atol(char *str)
{
	unsigned long	result;

	result = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
		result = result * 10 + (*str++ - '0');
	if (result > 999999999999)
	{
		write(2, "Dict error\n", 11);
		exit(EXIT_FAILURE);
	}
	return (result);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_ltoa(unsigned long nbr)
{
	unsigned long	martyr;
	char			*result;
	int				idx;
	int				nbr_size;

	martyr = nbr;
	nbr_size = 1;
	while (martyr / 10)
	{
		nbr_size++;
		martyr /= 10;
	}
	idx = nbr_size;
	result = (char *)malloc(sizeof(char) * (nbr_size + 1));
	while (idx)
	{
		*(result + idx - 1) = (nbr % 10) + '0';
		nbr /= 10;
		idx--;
	}
	*(result + nbr_size) = 0;
	return (result);
}
