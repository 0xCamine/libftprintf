/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:46 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 15:02:47 by abouferr         ###   ########.fr       */
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

int	ft_flagcount(const char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && ft_isflag(s[i + 1]) != -1)
			count++;
		i++;
	}
	return (count);
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
				ft_putchar_fd(va_arg(args , int) , 1);
			}
			else if(s[i + 1] == 'd' || (s[i + 1] == 'i') )
			{
				ft_putnbr_fd(va_arg(args , int) , 1);
			}
			else if(s[i + 1] == 'u'  )
			{
				ft_putnbr_fd(va_arg(args , unsigned int) , 1);
			}
			
			i++;
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	return (ft_strlen(s));
}
