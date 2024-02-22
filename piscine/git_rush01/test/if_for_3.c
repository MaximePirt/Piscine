/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_for_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdevaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:31:51 by vdevaine          #+#    #+#             */
/*   Updated: 2023/10/01 16:35:33 by vdevaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void init(int board[4][4], int views[4][4], char *arg);
void print_board(int board[4][4]);

void	views_search_three(int board[4][4], int view[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (view[0][j] == 2 && view[1][j] == 1)
				board[0][j] = 3;
			if (view[0][j] == 1 && view[1][j] == 2)
				board[3][j] = 3;
			if (view[i][2] == 2 && view[i][2] == 1)
				board[0][j] = 3;
			if (view[j][2] == 1 && view[i][3] == 2)
				board[2][j] = 3;
			j++;
		}
	j = 0;
	i++;
	}
}

int	is_arg_valid(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (1 > 30)
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		i++;
	}
	if ( i != 31)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	views[4][4];
	int	board[4][4];

	i = 0;
	j = 0;
	if (argc != 2 || !is_arg_valid(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init(board, views, argv[1]);
	views_search_three(board, views);
	print_board(board);
}

