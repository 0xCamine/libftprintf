/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:02:56 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 19:00:30 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_fd(long n, int fd, int *len)
{
	char			nb;
	unsigned long	number;

	if (*len < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd, len);
		number = (unsigned long)(-(n + 1)) + 1;
	}
	else
		number = (unsigned long)n;
	if (number >= 10)
		ft_putnbr_fd((long)(number / 10), fd, len);
	if (*len < 0)
		return ;
	nb = (number % 10) + '0';
	ft_putchar_fd(nb, fd, len);
}
