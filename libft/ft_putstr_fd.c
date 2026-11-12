/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:55:19 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 19:18:22 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		*len = *len + write(fd, &s[i++], 1);
}
