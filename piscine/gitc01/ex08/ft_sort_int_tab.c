/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:32:02 by mpierrot          #+#    #+#             */
/*   Updated: 2023/09/24 19:38:31 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int	*tab, int	size)
{	
		int i;
  	int a;
	  int temp;

		i = 0 ;
 		a = 0 ;
			while(a <= size)
			{
 	   		while(i < size)
 	   		{
        	if (tab[i] > tab[i+1])
        	{
          	temp = tab[i];
          	tab[i] = tab[size-i+1];
          	tab[size-i+1] = temp;
          	i++;
        	}
        	else
        	{
        		i++;
        	}
    		}
    i = 0;
    a++;
			}
}
int main()
{
	int size;
	size = 4;
	int tab[] = {12, 5, 2, 3};
	ft_sort_int_tab(&tab[size], size);
	return(0);
}
