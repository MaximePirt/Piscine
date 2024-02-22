/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehalliez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:49:23 by ehalliez          #+#    #+#             */
/*   Updated: 2023/10/01 17:53:33 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cols_up_valid(int board[4][4], int views[4][4], int n);
int	cols_down_valid(int board[4][4], int views[4][4], int n);
int	rows_left_valid(int board[4][4], int views[4][4], int n);
int	rows_right_valid(int board[4][4], int views[4][4], int n);
int	no_cols_duplicate(int board[4][4], int n);

// returns 1 if first n rows are valid (starting from row 0)
// returns 0 otherwise
int	board_is_valid(int board[4][4], int views[4][4], int n)
{
	if (!no_cols_duplicate(board, n)
		|| !cols_up_valid(board, views, n)
		|| !cols_down_valid(board, views, n)
		|| !rows_left_valid(board, views, n)
		|| !rows_right_valid(board, views, n))
	{
		return (0);
	}
	return (1);
}

// search for duplicates in columns
// returns 1 if no duplicate is found
// returns 0 otherwise
int	no_cols_duplicate(int board[4][4], int n)
{
	int	i;
	int	j;
	int	k;
	int	temp;

	j = -1;
	while (++j < 4)
	{
		i = -1;
		while (++i < n && board[i][j] != 0)
		{
			temp = board[i][j];
			k = 1;
			while (i + k <= n && board[i + k][j] != 0)
			{
				if (temp == board[i + k][j])
					return (0);
				k++;
			}
		}
	}
	return (1);
}
