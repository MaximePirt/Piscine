/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:24:25 by abernade          #+#    #+#             */
/*   Updated: 2023/09/30 18:07:36 by ehalliez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void print_board(int board[4][4]);
int *create_tab(int tab[4][4], char *arg);

int is_arg_valid(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i > 30)
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		if (i % 2 == 0 && (str[i] < '0' || str[i] > '4'))
			return (0);
		i++;	
	}
	return (1);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int tab_arg[4][4];
	int board[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	j = 0;
	if (argc != 2 || !is_arg_valid(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	create_tab(tab_arg, argv[1]);
	char c;
	while (j < 4)
	{
		while (i < 4)
		{
			c = tab_arg[j][i] + '0';
			printf("%d ", tab_arg[j][i]);
			i++;
		}
	printf("\n");
	j++;
	i = 0;
	}
	printf("\n\n");
	print_board(board);
}
