/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:20:04 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	joinedlen;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	joinedlen = ft_strlen(s1) + ft_strlen(s2);
	joined = (char*)malloc(sizeof(char) * (joinedlen + 1));
	if (joined == NULL)
		return (NULL);
	while (*s1)
	{
		joined[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		joined[i] = *s2++;
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
