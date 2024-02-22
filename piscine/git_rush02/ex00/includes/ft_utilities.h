/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:05:43 by nle-roux          #+#    #+#             */
/*   Updated: 2023/10/08 11:29:53 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILITIES_H
# define FT_UTILITIES_H
# include <unistd.h>
# include <stdlib.h>

unsigned long	ft_atol(char *str);
void			ft_putstr(char *str);
char			*ft_ltoa(unsigned long nbr);
int				ft_strlen(char *str);
int				is_space(char c);
#endif
