/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:49:47 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/05 19:56:44 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	tamp;

	i = 0;
	while (src[i] != '\0')
	{
		tamp = src[i];
		dest[i] = tamp;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
char dest[] = "";
char src[] = "gtg,tpg,t";

	printf("%s", ft_strcpy(dest, src));
}
