/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:54:50 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/11/19 20:08:20 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	size *= count;
	res = (unsigned char *)malloc(size);
	if (!res)
		return (NULL);
	while (i < size)
		res[i++] = 0;
	return ((void *)res);
}
