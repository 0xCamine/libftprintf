/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:46 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 18:59:15 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

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

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if ((s[i] == '%' && ft_isflag(s[i + 1]) != -1))
		{
			if (s[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			else if (s[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
			}
			else if (s[i + 1] == 'd' || (s[i + 1] == 'i'))
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			else if (s[i + 1] == 'u')
			{
				ft_putnbr_fd(va_arg(args, unsigned int), 1);
			}
			else if (s[i + 1] == 'x')
			{
				ft_putnbrbase_fd(va_arg(args, unsigned int), "0123456789abcdef",
					1);
			}
			else if (s[i + 1] == 'X')
			{
				ft_putnbrbase_fd(va_arg(args, unsigned int), "0123456789ABCDEF",
					1);
			}
			else if (s[i + 1] == 'p')
			{
				write(1, "0x", 2);
				ft_putnbrbase_fd(va_arg(args, long), "0123456789abcdef", 1);
			}
			i = i + 2;
		}
		else if (s[i] == '%' )
		{
			write(1  , "%" , 1);
			i = i + 2;
		}
		else
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return (ft_strlen(s));
}
