/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:51:01 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 13:16:37 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbrbase_fd(unsigned long number, char *base, int fd, int *len)
{
	unsigned long	base_len;

	base_len = ft_strlen(base);
	if (number >= base_len)
		ft_putnbrbase_fd(number / base_len, base, fd, len);
	*len = *len + write(fd, &base[number % base_len], 1);
}
