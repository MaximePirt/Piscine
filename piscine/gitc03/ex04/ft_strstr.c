/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:39:17 by mpierrot          #+#    #+#             */
/*   Updated: 2023/10/04 20:15:17 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find);
char	*diffijz(char *str, char *to_find, int i, int z);

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
		z = i;
	}
	i = 0;
	diffijz(str, to_find, i, z);
	return(to_find);
}

char *diffijz(char *str, char *to_find, int i, int z)	
{
 	int j;
  j = 0;
  while (str[i] != '\0')
  {
    if (str[i] == to_find[j])
    	j++;
    else if (j < z)
      j = 0;
    if (j >= z)
    {   
      to_find[j] = str[i];
      j++;
    }
    i++;
  }
    if (j < z)
		{
			*to_find = 0;
			return(0);
		}
  return(to_find);
}

#include <stdio.h>
#include <string.h>
int main ()
{
char str[] = "Hello wowold";
char to_find[] = "world";
//char s[] = "Hello wowold";
//char h[] = "world";

printf("%s\n", ft_strstr(str, to_find));
//printf("%s", strstr(s, h));
}
