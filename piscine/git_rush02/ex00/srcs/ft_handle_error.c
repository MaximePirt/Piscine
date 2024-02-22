/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:47:38 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/08 11:43:46 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error.h"
#include "../includes/ft_utilities.h"

int	check_signe_number(char *str)
{
	int	signe;

	signe = 1;
	while (is_space(*str))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	return (signe);
}

int	ft_check_args(int argc, char **argv)
{
	if (argc == 1)
	{
		if (check_signe_number(argv[1]) < 0)
			return (0);
	}
	else if (argc == 2)
	{
		if (check_signe_number(argv[2]) < 0 || ft_strlen(argv[1]) == 0)
			return (0);
	}
	else
		return (0);
	return (1);
}
