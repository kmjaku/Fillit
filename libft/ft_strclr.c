/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semartin <semartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:14:59 by semartin          #+#    #+#             */
/*   Updated: 2014/11/10 17:27:40 by semartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		nb;
	int		i;

	if (s)
	{
		i = 0;
		nb = ft_strlen(s);
		while (i <= nb)
			s[i++] = 0;
	}
}