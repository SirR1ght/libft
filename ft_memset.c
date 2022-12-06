/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 09:11:51 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:56:25 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = ch;
		i++;
	}
	return (b);
}
