/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:47:48 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	k;
	char	*trimed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
		i++;
	len = ft_strlen(s1);
	while (len > i && (ft_strchr(set, s1[len - 1]) != NULL))
		len--;
	trimed = (char*)malloc(sizeof(*s1) * (len - i + 1));
	if (!trimed)
		return (NULL);
	k = 0;
	while (i < len)
	{
		trimed[k] = s1[i];
		k++;
		i++;
	}
	trimed[k] = '\0';
	return (trimed);
}
