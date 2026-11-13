/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:09:53 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 18:55:07 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexptr(const char *s, int i, int *len, va_list args)
{
	unsigned long	address;

	if (s[i + 1] == 'x')
	{
		ft_putnbrbase_fd(va_arg(args, unsigned int), "0123456789abcdef", 1,
			len);
	}
	else if (s[i + 1] == 'X')
	{
		ft_putnbrbase_fd(va_arg(args, unsigned int), "0123456789ABCDEF", 1,
			len);
	}
	else if (s[i + 1] == 'p')
	{
		address = va_arg(args, unsigned long);
		if (address == 0)
		{
			*len = *len + write(1, "(nil)", 5);
		}
		else
		{
			*len = *len + write(1, "0x", 2);
			ft_putnbrbase_fd(address, "0123456789abcdef", 1, len);
		}
	}
}

void	ft_print_unsdeicmal(const char *s, int i, int *len, va_list args)
{
	if (s[i + 1] == 'd' || (s[i + 1] == 'i'))
	{
		ft_putnbr_fd(va_arg(args, int), 1, len);
	}
	else if (s[i + 1] == 'u')
	{
		ft_putnbr_fd(va_arg(args, unsigned int), 1, len);
	}
}

void	ft_print_strchar(const char *s, int i, int *len, va_list args)
{
	char	*address;

	if (s[i + 1] == 's')
	{
		address = va_arg(args, char *);
		if (address == NULL)
		{
			*len = *len + write(1, "(null)", 6);
		}
		else
			ft_putstr_fd(address, 1, len);
	}
	else if (s[i + 1] == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1, len);
	}
}

void	ft_singleprint(const char *s, int *i, int *len)
{
	if (s[*i] == '%' && s[(*i) + 1] == '%')
	{
		*len = *len + write(1, "%", 1);
		*i = *i + 2;
	}
	else if (s[*i] == '%' && ft_isflag(s[(*i) + 1]) == -1)
	{
		*i = *i + 2;
		return ;
	}
	else
	{
		*len = *len + write(1, &s[*i], 1);
		(*i)++;
	}
}

int	ft_isflag(char c)
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
