/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:46 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 14:18:42 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isflag(char c)
{
	char	*flags;
	int		i;

	flags = "cspdiuxX";
	i = 0;
	while (flags[i])
	{
		if (c == flags[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && ft_isflag(s[i + 1]) != -1)
		{
			if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u')
				ft_print_unsdeicmal(s, i, &len, args);
			else if (s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == 'p')
				ft_print_hexptr(s, i, &len, args);
			else if (s[i + 1] == 'c' || s[i + 1] == 's')
				ft_print_strchar(s, i, &len, args);
			i = i + 2;
		}
		else
			ft_singleprint(s, &i, &len);
	}
	va_end(args);
	return (len);
}
