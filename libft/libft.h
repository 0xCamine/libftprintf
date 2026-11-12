/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:28:37 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/12 19:15:17 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(long n, int fd, int *len);
void	ft_putnbrbase_fd(long number, char *base, int fd, int *len);

#endif