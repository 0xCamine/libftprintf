/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:07:40 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 11:23:47 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(long n, int fd, int *len);
void	ft_putnbrbase_fd(long number, char *base, int fd, int *len);

int		ft_printf(const char *, ...);

#endif