/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:30:03 by nle-roux          #+#    #+#             */
/*   Updated: 2023/10/08 21:38:06 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/ft_utilities.h"
#include "includes/error.h"
#include "includes/core.h"
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

int		secure_fd(char *dic);
void	display_final(char *str);
char	*init_ptr(char *ptr);

int	main(int argc, char **argv)
{
	int				file_des;
	char			*dictionnary;
	unsigned long	value;
	char			*ptr;

	if (ft_check_args(argc - 1, argv))
	{
		if (argc - 1 == 2)
		{
			dictionnary = argv[1];
			value = ft_atol(argv[2]);
		}
		else
		{
			dictionnary = "numbers.dict";
			value = ft_atol(argv[1]);
		}
		file_des = secure_fd(dictionnary);
		ptr = init_ptr(ptr);
		display_final(ft_print_number(value, dictionnary, ptr));
		close(file_des);
	}
	else
		ft_putstr("Error\n");
	return (0);
}

char	*init_ptr(char *ptr)
{
	int	i;

	ptr = malloc(sizeof(char) * 150);
	i = 0;
	while (i < 150)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

void	display_final(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[i - 1] == ' ')
		str[i - 1] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	free(str);
}

int	secure_fd(char *dic)
{
	int	fd;

	fd = open(dic, O_RDONLY);
	if (fd != -1)
		return (fd);
	write(2, "Dict Error\n", 11);
	exit(EXIT_FAILURE);
	return (-1);
}
