/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehalliez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:48:37 by ehalliez          #+#    #+#             */
/*   Updated: 2023/10/01 16:49:06 by ehalliez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_board(int board[4][4]);
void	init_views(int views[4][4], char *arg);
void	init(int board[4][4], int views[4][4], char *arg);

// Fill board with 0, fill views using arg
void	init(int board[4][4], int views[4][4], char *arg)
{
	init_board(board);
	init_views(views, arg);
}

void	init_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		j = -1;
		i++;
	}
}

void	init_views(int views[4][4], char *arg)
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			views[j][i] = arg[2 * ((j * 4) + i)] - '0';
			i++;
		}
	j++;
	}
}
