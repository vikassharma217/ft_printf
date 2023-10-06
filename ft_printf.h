/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsharma <vsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:31:20 by vsharma           #+#    #+#             */
/*   Updated: 2023/10/06 22:29:44 by vsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_digit(int nbr);
int	ft_print_unsign_dec(unsigned int nbr);
int	ft_print_hex(unsigned int nbr, char c);
int	ft_formatcheck(char specifier, va_list arguments);
int	ft_print_pointer(void *ptr);
int	ft_formatcheck(char specifier, va_list arguments);

#endif
