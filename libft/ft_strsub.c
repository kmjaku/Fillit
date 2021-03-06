/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semartin <semartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:27:05 by semartin          #+#    #+#             */
/*   Updated: 2015/01/22 12:47:43 by semartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s) || start + len > (size_t)ft_strlen(s))
		return (NULL);
	if (len == 0 || s[start] == 0)
	{
		str = malloc(sizeof(*str));
		*str = 0;
		return (str);
	}
	i = 0;
	if ((str = malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
