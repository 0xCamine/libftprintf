/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:58:48 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 12:38:59 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *len)
{
	int	ret;

	if (*len < 0)
		return ;
	ret = write(fd, &c, 1);
	if (ret < 0)
		*len = -1;
	else
		*len += ret;
}
