# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 09:32:46 by alexsanc          #+#    #+#              #
#    Updated: 2022/11/22 10:41:20 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

#=========================VARIABLES=========================

INCLUDE	= ft_printf.h

SRCS		= ft_putchar.c ft_putstr.c ft_putnbr.c ft_ptr.c\
			ft_hexa_l.c ft_hexa_u.c ft_printf.c
			
OBJS		= $(SRCS:.c=.o)

# We use addsuffix to add the .d extension to the object files

CFLAGS  	= -Wall -Wextra -Werror -W -O3 -Ofast -g3

# -W = Warnings
# -03, -0fast, -g3 = Fast comp

RMV			= rm -f

#===========================RULES===========================

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# -c $< = Compile the source file
# $< = first dependency
# $^ = all dependencies
# $> = first target
# $? = all dependencies newer than target
# %.o: %.c = target: dependencies

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RMV) -r $(OBJS)
fclean:			clean
				$(RMV) $(NAME)

re:				fclean all

#=======================CLARIFICATIONS=======================

.PHONY: all clean fclean re 

# .PHONY is used to avoid conflicts with files named clean, fclean, re, all