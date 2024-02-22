/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:00:19 by abernade          #+#    #+#             */
/*   Updated: 2023/09/30 16:38:06 by abernade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void fill_col(int *board, int *values, int c)
{
	int i;

	i = 0;
	while (++i <= 4)
	{
		if (values[i -1])
			board[i][c] = values[i - 1];
	}
}

void first_fill_loop(int *board, int *v)
{
	int i;

	i = 0;
	while (++i <= 4)
	{
		if (board[0][i] == 4)
		{
			fill_col(board, [1, 2, 3, 4]);
		}
	}
}
