/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 23:40:00 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 23:40:00 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, int *len)
{
	char	nb;

	if (*len < 0)
		return ;
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd, len);
	if (*len < 0)
		return ;
	nb = (n % 10) + '0';
	ft_putchar_fd(nb, fd, len);
}
