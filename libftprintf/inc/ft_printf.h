/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaquero <gbaquero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:10:22 by gbaquero          #+#    #+#             */
/*   Updated: 2023/05/28 09:21:38 by gbaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_len(char c, int *len);
void	ft_putstr_len(char *str, int *len);
void	ft_putnbr_len(int n, int *len);
void	ft_putunbr_len(int unsigned n, int *len);
void	ft_puthex_len(int n, int *len, char c);
void	ft_putpointer_len(unsigned long pointer, int *len);

#endif
