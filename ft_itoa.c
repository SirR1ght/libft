/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:24:23 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/11/19 20:10:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(long c)
{
	size_t	i;

	if (c > 0)
		i = 0;
	if (c < 0)
		i = 1;
	while (c)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*res;
	long	tmp;
	size_t	len;

	tmp = n;
	if (tmp == 0)
		return (ft_strdup("0"));
	if (tmp < 0)
		tmp *= -1;
	len = ft_count(n);
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[len--] = '\0';
	while (tmp > 0)
	{
		res[len--] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	return (res);
}
