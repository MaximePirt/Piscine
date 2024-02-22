/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:24:50 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/01 15:05:42 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void fils(*views[4][4], board[4][4])
{
	int a;
	int b;
	int i;
	int j;

	a = 0;
	b = 0;
	i = 0;
	j = 0;
	while(board[j][i] == 0)
	{
		while(views[j][i] != '\0')
		{
			if (board[j][i] == 1)
			{
				views[j][i] = 4;
				i++;
			}
			else if (board[j][i] == 4 && j )
			{
			views[j][i] = 1;
			views[j][i+1] = 2;
			views[j][i+2] = 3;
			views[j][i+3] = 4;
			j++;
			}
			else if (board[j][i] == )
			{
			
			}
		i++;
		}
		i = 0;
		j++;
	}

}*/


void detect(*views[][], *board[][])
{
int i;
int j;
int a;

i = 0;
j = 0;
a = 0;
	while(views[i] != '\0')
	{
		while(views[i][j] != '\0')
		{
			if(views[i][j] == 4)
			a++;
			i++;
		}
		i=0;
		j++;
	}
	if(a == 3)
	{
	
	}
}

int main ()
{
 int views[4][4];
 int board[4][4];

  board[0][0] = 1;
  board[0][1] = 2;
  board[0][2] = 3;
  board[0][3] = 4;

  board[1][0] = 2;
  board[1][1] = 3;
  board[1][2] = 4;
  board[1][3] = 1;

  board[2][0] = 3;
  board[2][1] = 4;
  board[2][2] = 2;
  board[2][3] = 4;

	board[3][0] = 1;
  board[3][1] = 2;
  board[3][2] = 3;
  board[3][3] = 4;

	detect(*board, *views);

}
