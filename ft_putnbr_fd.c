/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SirR1ght <SirR1ght@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:31:27 by SirR1ght          #+#    #+#             */
/*   Updated: 2022/12/06 19:59:02 by SirR1ght         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long r;

	r = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		r = -r;
	}
	if (r < 10)
	{
		ft_putchar_fd(r + '0', fd);
		return ;
	}
	ft_putnbr_fd(r / 10, fd);
	ft_putnbr_fd(r % 10, fd);
}
