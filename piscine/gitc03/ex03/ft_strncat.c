/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:21:00 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/04 16:19:22 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb);

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (a < nb)
	{
		if (src[a] != '\0')
		{
			dest[i] = src[a];
			i++;
			a++;
		}
		else if (src[a] == '\0')
		{	
			dest[i] = '\0';
			return (dest);
		}
	}
	dest[i] = '\0';
	return (dest);
}
