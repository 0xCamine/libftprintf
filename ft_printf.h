/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:07:40 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/13 14:20:05 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(long n, int fd, int *len);
void	ft_putnbrbase_fd(unsigned long number, char *base, int fd, int *len);
size_t	ft_strlen(const char *s);

void	ft_print_hexptr(const char *s, int i, int *len, va_list args);
void	ft_print_unsdeicmal(const char *s, int i, int *len, va_list args);
void	ft_print_strchar(const char *s, int i, int *len, va_list args);
void	ft_singleprint(const char *s, int *i, int *len);

int		ft_printf(const char *s, ...);

#endif
