/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:32:56 by alexsanc          #+#    #+#             */
/*   Updated: 2022/10/20 12:41:54 by alexsanc         ###   ########.fr       */
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
# include <stdio.h>
/* those libraries are the ones we are supposed to
use for the printf. Including them as dump and maybe delete later */

# define ERR_NUM (int)-1
# define NLL_MSG (char *)"(null)"
/* We define a macro (Global Args) for the return value of
the function printf in case of error. In addition we define
a macro for the message to be printed in case of NULL pointer */

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
#endif
