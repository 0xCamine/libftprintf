/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:02:56 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 12:38:42 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_fd(long n, int fd, int *len)
{
	char	nb;

	nb = 0;
	if (n == -2147483648)
	{
		*len = *len + write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = n * (-1);
		*len = *len + write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, len);
	nb = (n % 10) + 48;
	*len = *len + write(fd, &nb, 1);
	return ;
}
