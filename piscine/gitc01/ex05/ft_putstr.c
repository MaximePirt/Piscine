/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:54:39 by mpierrot          #+#    #+#             */
/*   Updated: 2023/09/23 22:36:57 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str);

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, &str[i], 1);
	i ++;
	}
}

/*int main()
{
	char *str;
	str = "jaimelespatate4545s";
	ft_putstr(str);
}*/
