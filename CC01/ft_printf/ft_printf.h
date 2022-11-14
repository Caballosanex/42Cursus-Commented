/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:32:56 by alexsanc          #+#    #+#             */
/*   Updated: 2022/11/14 09:42:51 by alexsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/* #ifndef is a preprocessor directive that is used
to check if a macro has been defined or not.
#define is a preprocessor directive in C and C++ that
defines a macro which can be used as a constant or
function-like macro.*/

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
/* those libraries are the ones we are supposed to
use for the printf. Including them as dump and maybe delete later */

# define ERR_NUM (int)-1
# define NLL_MSG (char *)"(null)"
# define HEXA_LOW "0123456789abcdef"
# define HEXA_UP "0123456789ABCDEF"
/* The first macro is used to indicate a bad return value from a function.
NLL_MSG is used to indicate a null pointer.
HEXA_LOW is used to define a hexadecimal string, using lower case.
HEXA_UP is used to define a hexadecimal string, using upper case. */

int	ft_printf(char const *s, ...);

int	ft_putchar(int c, int count);

int	ft_putstr(char *s, int count);

int	ft_type(va_list arg, char const type, int count);

int	ft_putnbr(int num, int count);

int	ft_printnum(unsigned int num, int count);

int	ft_ptr(void *pt, int count);

int	ft_convert(unsigned long long int num, int count);

int	ft_hexa_l(unsigned int num, int count);

int	ft_hexa_u(unsigned int num, int count);
#endif

/* ft_printf() is the function that will be called by the user
ft_putchar() will print a single character to the output
ft_putstr() will print a string of characters to the output
ft_type() will print a single character to the output
ft_putnbr() will print a number to the output
ft_printnum() will print a positive number to the output
ft_ptr() will print a pointer to the output
ft_convert() will print a hexadecimal number to the output
ft_hexa_l() will print a hexadecimal number lower to the output
ft_hexa_u() will print a hexadecimal number upper to the output */