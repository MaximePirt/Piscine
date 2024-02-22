/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_possible_rows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:44:33 by abernade          #+#    #+#             */
/*   Updated: 2023/10/01 16:31:53 by ehalliez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	recursion(int arr[4], int start, int end, int rows[24][4]);
void	swap(int *a, int *b);
void	init_arrays(int v[4], int rows[24][4]);

// rows[x][0] must be == 0 for it to work
void	add_to_rows(int arr[4], int rows[24][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 24)
	{
		if (!rows[i][0])
		{
			j = -1;
			while (++j < 4)
				rows[i][j] = arr[j];
			return ;
		}
	}
}

void	recursion(int arr[4], int start, int end, int rows[24][4])
{
	int	i;

	if (start == end)
	{
		add_to_rows(arr, rows);
		return ;
	}
	i = start - 1;
	while (++i <= end)
	{
		swap(arr + start, arr + i);
		recursion(arr, start + 1, end, rows);
		swap(arr + start, arr + i);
	}
}

void	swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	init_arrays(int v[4], int rows[24][4])
{
	int	i;

	i = -1;
	while (++i < 4)
		v[i] = i + 1;
	i = -1;
	while (++i < 24)
		rows[i][0] = 0;
}

void	all_possible_rows(int rows[24][4])
{
	int	values[4];
	int	i;

	init_arrays(values, rows);
	recursion(values, 0, 3, rows);
	i = 0;
}
