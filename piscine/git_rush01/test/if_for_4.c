/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_for_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:17:13 by abernade          #+#    #+#             */
/*   Updated: 2023/10/01 17:16:36 by vdevaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void init(int board[4][4], int views[4][4], char *arg);
void print_board(int board[4][4]);
void	put_four(int board[4][4], int i, int j);
void	put_five(int board[4][4],int view[4][4], int i, int j);
void	put_chain_column(int board[4][4], int i, int j);
void	put_chain_line(int board[4][4], int i, int j);

void	views_search_four(int board[4][4], int view[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			put_five(board, view, i, j);
			if (view[i][j] == 1)
				put_four(board, i, j);
			if (view[i][j] == 4)
			{
				put_chain_column(board, i, j);
				put_chain_line(board, i, j);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	put_four(int board[4][4], int i, int j)
{
	if (i == 0)
		board[0][j] == 4;
	if (i == 1)
		board[3][j] == 4;
	if (i == 2)
		board[i][0] == 4;
	if (i == 3)
		board[i][3] == 4;
}

void	put_chain_column(int board[4][4], int i, int j)
{
	if (i == 0)
	{
		board[0][j] = 1;
		board[1][j] = 2;
		board[2][j] = 3;
		board[3][j] = 4;
	}
	if (i == 1)
	{
		board[3][j] = 1;
		board[2][j] = 2;
		board[1][j] = 3;
		board[0][j] = 4;
	}
}

void	put_chain_line(int board[4][4], int i, int j)
{
	if (i == 2)
	{
		board[i][0] = 1;
		board[i][1] = 2;
		board[i][2] = 3;
		board[i][3] = 4;
	}
	if (i == 3)
	{
		board[i][3] = 1;
		board[i][2] = 2;
		board[i][1] = 3;
		board[i][0] = 4;
	}
}

void	put_five(int board[4][4],int view[4][4], int i, int j)
{
	if (view[0][j] == 2 && view[1][j] == 3)
		board[2][j] = 4;
	if (view[0][j] == 3 && view[1][j] == 2)
		board[3][j] = 4;
	if (view[2][j] == 2 && view[3][j] == 3)
		board[i][2] = 4;
	if (view[2][j] == 3 && view[3][j] == 2)
		board[i][3] = 4;
}

int	is_arg_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		if (1 > 30)
			return (0);
		if (i % 2 == 0 && (str[i] != ' '))
			return (0);
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int views[4][4];
	int board[4][4];

	i = 0;
	j = 0;
	
	init(board, views, argv[1]);
	views_search_four(board, views);
	print_board(board);
}



