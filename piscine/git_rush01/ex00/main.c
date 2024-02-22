/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:24:25 by abernade          #+#    #+#             */
/*   Updated: 2023/10/01 16:28:22 by abernade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_board(int board[4][4]);
void	init(int board[4][4], int views[4][4], char *arg);
int		board_is_valid(int board[4][4], int views[4][4], int n);
void	all_possible_rows(int rows[24][4]);
int		solver(int board[4][4], int views[4][4], int rows[24][4], int r);

int	is_arg_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i > 30)
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

// views: {{col1up,	   col2up,    col3up,    col4up},
//		   {col1down,  col2down,  col3down,  col4down},
//		   {row1left,  row2left,  row3left,  row4left},
//		   {row1right, row2right, row3right, row4right}
//		  }
int	main(int argc, char **argv)
{
	int	views[4][4];
	int	board[4][4];
	int	rows[24][4];

	if (argc != 2 || !is_arg_valid(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init(board, views, argv[1]);
	all_possible_rows(rows);
	if (solver(board, views, rows, 0))
		print_board(board);
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
