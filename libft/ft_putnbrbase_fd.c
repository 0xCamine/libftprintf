/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:51:01 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 19:18:02 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbrbase_fd(long number, char *base, int fd, int *len)
{
	int	base_len;

	// printf("number = %ld \n" , number);
	base_len = ft_strlen(base);
	if (number < 0)
	{
		number *= -1;
		*len = *len + write(fd, "-", 1);
	}
	if (number >= base_len)
		ft_putnbrbase_fd(number / base_len, base, fd, len);
	*len = *len + write(fd, &base[number % base_len], 1);
}

// 1337  --> 0539  0123456789ABCDEF