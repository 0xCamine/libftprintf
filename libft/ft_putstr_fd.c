/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:55:19 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 12:38:47 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	int	i;

	if (!s || *len < 0)
		return ;
	i = 0;
	while (s[i] && *len >= 0)
	{
		ft_putchar_fd(s[i], fd, len);
		i++;
	}
}
