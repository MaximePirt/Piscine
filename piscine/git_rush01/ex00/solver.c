/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehalliez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:49:48 by ehalliez          #+#    #+#             */
/*   Updated: 2023/10/01 17:08:38 by abernade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		board_is_valid(int board[4][4], int views[4][4], int n);
void	put_row(int board[4][4], int row[4], int r);

int	solver(int board[4][4], int views[4][4], int rows[24][4], int r)
{
	int	i;

	i = -1;
	if (r == 4)
		return (1);
	while (++i < 24)
	{
		put_row(board, rows[i], r);
		if (board_is_valid(board, views, r))
			if (solver(board, views, rows, r + 1))
				return (1);
	}
	return (0);
}
