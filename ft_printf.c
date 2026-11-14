/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:46 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/14 11:49:11 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handle_conversion(const char *s, int i, int *len, va_list *args)
{
	if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u')
		ft_print_unsdeicmal(s, i, len, args);
	else if (s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == 'p')
		ft_print_hexptr(s, i, len, args);
	else if (s[i + 1] == 'c' || s[i + 1] == 's')
		ft_print_strchar(s, i, len, args);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!s)
		return (-1);
	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i] && len >= 0)
	{
		if (s[i] == '%' && s[i + 1] == '%')
		{
			ft_putchar_fd('%', 1, &len);
			i += 2;
		}
		else if (s[i] == '%' && s[i + 1] && ft_isflag(s[i + 1]) != -1)
		{
			ft_handle_conversion(s, i, &len, &args);
			i += 2;
		}
		else
			ft_putchar_fd(s[i++], 1, &len);
	}
	return (va_end(args), len);
}
