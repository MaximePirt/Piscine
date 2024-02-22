/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_views.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:58:18 by abernade          #+#    #+#             */
/*   Updated: 2023/10/01 16:45:52 by abernade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if board violates col_up rules for the first n rows (starting from 0)
// returns 1 if the board is valid, returns 0 otherwise
int	cols_up_valid(int board[4][4], int views[4][4], int n)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = -1;
	while (++i < 4)
	{
		count = 0;
		j = -1;
		max = 0;
		while (++j <= n)
		{
			if (board[j][i] > max)
			{
				count++;
				max = board[j][i];
			}
			if (count > views[0][i] || (j == 3 && count != views[0][i]))
				return (0);
		}
	}
	return (1);
}

// check if board violates row_left rules for the first n rows (starting from 0)
// returns 1 if the board is valid, returns 0 otherwise
int	rows_left_valid(int board[4][4], int views[4][4], int n)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = -1;
	while (++i <= n)
	{
		count = 0;
		j = -1;
		max = 0;
		while (++j < 4)
		{
			if (board[i][j] > max)
			{
				count++;
				max = board[i][j];
			}
			if (count > views[2][i] || (j == 3 && count != views[2][i]))
				return (0);
		}
	}
	return (1);
}

int	rows_right_valid(int board[4][4], int views[4][4], int n)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = -1;
	while (++i <= n)
	{
		count = 0;
		j = -1;
		max = 0;
		while (++j < 4)
		{
			if (board[i][3 - j] > max)
			{
				count++;
				max = board[i][3 - j];
			}
			if (count > views[3][i] || (j == 3 && count != views[3][i]))
				return (0);
		}
	}
	return (1);
}

int	cols_down_valid(int board[4][4], int views[4][4], int n)
{	
	int	i;
	int	j;
	int	count;
	int	max;

	if (n != 3)
		return (1);
	i = -1;
	while (++i <= n)
	{
		count = 0;
		j = -1;
		max = 0;
		while (++j < 4)
		{
			if (board[3 - j][i] > max)
			{
				count++;
				max = board[3 - j][i];
			}
			if (count > views[1][i] || (j == 3 && count != views[1][i]))
				return (0);
		}
	}
	return (1);
}
