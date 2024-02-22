/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:18:26 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/12 00:29:42 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_sizestsep(int size, char **strs, char *sep);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_sizestsep(int size, char **strs, char *sep)
{
	int	i;
	int	totalsize;

i = 0;
totalsize = 0;
	while (i < size)
		totalsize = totalsize + ft_strlen(strs[i++]);
i = 0;
	while (i < size - 1)
	{
		totalsize = totalsize + ft_strlen(sep);
		i++;
	}
	return (totalsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totalsize;
	char	*dest;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char) + 1));
totalsize = ft_sizestsep(size, strs, sep);
dest = malloc(sizeof(char) * totalsize);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size -1)
			ft_strcat(dest, sep);
i++;
	}
	return (dest);
}
