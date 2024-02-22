/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:30:35 by nle-roux          #+#    #+#             */
/*   Updated: 2023/10/08 21:38:37 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_file_utilities.h"
#include "../includes/ft_utilities.h"
#include "../includes/core.h"

struct s_var
{
	unsigned long	divider;
	unsigned long	unit_3;
	int				quo;
	char			*ptr;
};

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = ' ';
	i++;
	dest[i] = '\0';
	return (dest);
}

unsigned long	get_divider(unsigned long nbr)
{
	int				size;
	unsigned long	divider;

	divider = 1;
	size = 1;
	while (nbr / 10)
	{
		size++;
		nbr /= 10;
		if (size % 3 == 1)
			divider *= 1000;
	}
	return (divider);
}

void	ft_print_number_helper(unsigned long nb, char *dict, char *ptr)
{
	char	*number_found;
	char	*long_to_str;

	long_to_str = ft_ltoa(nb);
	number_found = return_nb_name(long_to_str, dict);
	ft_strcat(ptr, number_found);
	free(long_to_str);
	free(number_found);
}

void	ft_deleguate(int *quo, unsigned long *unit_3, char *dict, char *ptr)
{
	int	parser;

	parser = 100;
	while (parser > 0)
	{
		*quo = *unit_3 / parser;
		if (*unit_3 >= 10 && *unit_3 < 20)
		{
			ft_print_number_helper(*unit_3, dict, ptr);
			break ;
		}
		else if (*quo > 0 && parser == 100)
		{
			ft_print_number_helper(*quo, dict, ptr);
			ft_print_number_helper(100, dict, ptr);
		}
		else if (*quo > 0)
		{
			ft_print_number_helper(*quo * parser, dict, ptr);
		}
		*unit_3 = *unit_3 % parser;
		parser = parser / 10;
	}
}

char	*ft_print_number(unsigned long nbr, char *dict, char *ptr)
{
	struct s_var	var;

	var.quo = 0;
	var.divider = get_divider(nbr);
	var.ptr = ptr;
	if (nbr >= 0 && nbr < 20)
	{
		ft_print_number_helper(nbr, dict, var.ptr);
		return (var.ptr);
	}
	while (var.divider > 0)
	{
		var.unit_3 = nbr / var.divider;
		ft_deleguate(&var.quo, &var.unit_3, dict, var.ptr);
		if (var.divider > 1)
			ft_print_number_helper(var.divider, dict, var.ptr);
		nbr = nbr % var.divider;
		if (var.divider == 1)
			var.divider = 0;
		else
			var.divider = get_divider(nbr);
	}
	return (var.ptr);
}
