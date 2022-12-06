/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:40:47 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/11/19 20:11:58 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
