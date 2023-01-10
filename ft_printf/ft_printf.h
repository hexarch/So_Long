/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:05:36 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/02 14:15:29 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

void	ft_putchar(int x, int *index);
void	ft_putstr(char *new, int *byte);
void	ft_putnumber(int x, int *byte);
void	ft_putunsigned(unsigned int x, int *byte);
void	ft_puthex(unsigned int n, int type, int *byte);
void	ft_putaddress(unsigned long long n, int *byte);

int		ft_printf(const	char *str, ...);

#endif
