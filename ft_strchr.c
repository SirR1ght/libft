/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 01:29:35 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	h;
	char	*str;
	int		i;

	i = 0;
	h = (char)c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == h)
			return (&str[i]);
		i++;
	}
	if (str[i] == 0 && c == 0)
		return (&str[i]);
	return (0);
}
