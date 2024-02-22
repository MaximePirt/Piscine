/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:53:03 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/12 21:09:11 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str [i] != '\0')
	{
	i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		len;

i = 0;
len = ft_strlen(src);
c = malloc (sizeof(char) * len + 1);
	if (c == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
