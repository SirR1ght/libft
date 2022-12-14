/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 01:29:47 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			remember;
	unsigned char	*hst;
	unsigned char	*ndl;

	hst = (unsigned char *)haystack;
	ndl = (unsigned char *)needle;
	remember = 0;
	if (ndl[remember] == '\0')
		return ((char *)haystack);
	while (hst[remember] != '\0')
	{
		i = 0;
		if (!(remember + ft_strlen(needle) <= len))
			return (0);
		while (hst[remember + i] == ndl[i])
		{
			if (ndl[i + 1] == '\0')
				return ((char *)hst + remember);
			i++;
		}
		remember++;
	}
	return (0);
}
