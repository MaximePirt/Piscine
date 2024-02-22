/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utilities.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:47:12 by nle-roux          #+#    #+#             */
/*   Updated: 2023/10/08 19:45:26 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_UTILITIES_H
# define FT_FILE_UTILITIES_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdlib.h>

int		ft_file_size(char *path_to_file);
char	*return_nb_name(char *src, char *dict);

struct s_count
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	fd;
	int	size;
};

#endif
