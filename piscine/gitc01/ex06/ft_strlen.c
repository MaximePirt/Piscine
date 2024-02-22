/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:04:19 by mpierrot          #+#    #+#             */
/*   Updated: 2023/09/24 17:00:35 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlen(char	*str);

void	ft_strlen(char	*str)
{
	int		i;
	char	b;

	i = 0;
	while (str [i] != '\0')
	{
	i++;
	}
	b = i + 48;
	return(b);
}
/*
int main()
{
	char *str;
	str = "jaime";
	ft_strlen(str);
}
*/
