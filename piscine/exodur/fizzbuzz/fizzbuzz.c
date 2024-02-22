/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:27:33 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/08 18:55:27 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char str);
void ft_bzuz (int n);
void ft_putnbr(int n);


void ft_putchar(char str)
{
	write(1, &str, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
}


void ft_bzuz(int n)
{
char str;

while (n < 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
    {
            write (1, "fizzbuzz\n", 9);
            n++;
    }

		else if (n % 5 == 0)
		{
						write (1, "buzz\n", 5);
						n++;
		}
		else if (n % 3 == 0)
		{
						write (1, "fizz\n", 5);
						n++;
		}
		ft_putnbr(n);
	write(1, "\n", 1);
		n++;
	}
}

int main()
{
	int n;

n = 1;
	ft_bzuz(n);
}
