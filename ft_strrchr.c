/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 01:29:41 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len);
	res = (char *)s + len;
	while (res >= s)
	{
		if (*res == (char)c)
			return (res);
		res--;
	}
	return (NULL);
}
