/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:51:01 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 16:44:49 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbrbase_fd(long number, char *base, int fd)
{
	int	len;

	// printf("number = %ld \n" , number);
	len = ft_strlen(base);
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	if (number >= len)
		ft_putnbrbase_fd(number / len, base, fd);
	write(fd, &base[number % len], 1);
}

// 1337  --> 0539  0123456789ABCDEF