/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:42:32 by amalangi          #+#    #+#             */
/*   Updated: 2023/10/08 13:25:58 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_file_utilities.h"

int		find_word(char *str, char *to_find);
int		is_valid_fd(int fd);
int		ft_file_size(char *path_to_file);
int		set_index(char *str, int index);

int	ft_file_size(char *path_to_file)
{
	int	file_descriptor;
	int	c[1];
	int	char_count;

	file_descriptor = open(path_to_file, O_RDONLY);
	char_count = 0;
	if (file_descriptor != -1)
		while (read(file_descriptor, c, 1))
			char_count++;
	close(file_descriptor);
	return (char_count);
}

char	*return_nb_name(char *src, char *dict)
{
	struct s_count	cnt;
	char			*str;
	char			*nb_to_return;

	cnt.fd = open(dict, O_RDONLY);
	str = malloc(sizeof(char) * (ft_file_size(dict) + 1));
	nb_to_return = malloc(sizeof(char) * (ft_file_size(dict) + 1));
	if (is_valid_fd(cnt.fd) == -1)
		return (malloc(0));
	cnt.size = read(cnt.fd, str, ft_file_size(dict));
	str[cnt.size] = '\0';
	cnt.k = 0;
	cnt.i = find_word(str, src);
	if (cnt.i != -1)
	{
		while (str[cnt.i + cnt.k] != '\n')
		{
			nb_to_return[cnt.k] = str[cnt.i + cnt.k];
			cnt.k++;
		}
		nb_to_return[cnt.k] = '\0';
	}
	free(str);
	close(cnt.fd);
	return (nb_to_return);
}

int	is_valid_fd(int fd)
{
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return (-1);
	}
	else
		return (0);
}

int	find_word(char *str, char *to_find)
{
	struct s_count	cnt;

	cnt.i = 0;
	while (str[cnt.i] != '\0')
	{
		cnt.j = 0;
		if (str[cnt.i] == to_find[cnt.j])
		{
			while (str[cnt.i + cnt.j] == to_find[cnt.j]
				&& to_find[cnt.j] != '\0')
			{
				cnt.j++;
			}
			if (to_find[cnt.j] == '\0' && str[cnt.i + cnt.j] == ':')
				return (set_index(str, cnt.i));
		}
		cnt.i++;
	}
	write(2, "Dict Error\n", 11);
	return (-1);
}

int	set_index(char *str, int index)
{
	while (str[index] != ':')
		index++;
	index++;
	while (!(str[index] >= '!' && str[index] <= '~'))
		index++;
	return (index);
}
