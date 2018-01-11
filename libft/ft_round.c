/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:11:45 by semartin          #+#    #+#             */
/*   Updated: 2016/02/09 14:38:26 by semartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_round(double x, unsigned int dec)
{
	long power;

	power = 1;
	while (dec)
	{
		power *= 10;
		dec--;
	}
	return ((((x * power + 0.499999999999999)) / power));
}
