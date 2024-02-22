/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:30 by mpierrot          #+#    #+#             */
/*   Updated: 2023/09/22 10:53:49 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>//

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 3;

 	ft_div_mod(a, b, &div, &mod);


	printf("%d, %d", div, mod);
}*/
