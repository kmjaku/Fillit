/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonct.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddufour <ddufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 11:41:30 by ddufour           #+#    #+#             */
/*   Updated: 2016/06/14 11:33:36 by ddufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nb_tetris(char *map)
{
	int a;

	a = 0;
	while (*map++)
		if (*map == '\n')
			a++;
	a = (a + 1) / 5;
	return (a);
}

int		ft_sqrt(int nb)
{
	int racine;

	racine = 0;
	while (racine * racine < nb)
		racine++;
	if (racine * racine >= nb)
		return (racine);
	return (0);
}

char	*map_recup(char *av)
{
	int		ret;
	int		fd;
	char	*map;
	char	buf[BUF_SIZE + 1];

	if (!(map = (char*)malloc(sizeof(char) * 1)))
		return (NULL);
	map[0] = '\0';
	if ((fd = open(av, O_RDONLY)) == -1)
		return (NULL);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[ret] = '\0';
		if (!(map = ft_strjoin_free(map, buf)))
			return (NULL);
	}
	close(fd);
	return (map);
}
