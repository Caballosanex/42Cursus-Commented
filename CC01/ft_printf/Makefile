# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 09:32:46 by alexsanc          #+#    #+#              #
#    Updated: 2023/01/02 16:30:10 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

OBJ_DIR = obj/

#=========================VARIABLES=========================

INCLUDE	= -I ./

SRCS		= ft_putchar.c ft_putstr.c ft_putnbr.c ft_ptr.c\
			ft_hexa_l.c ft_hexa_u.c ft_printf.c
			
OBJS		= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS		= $(addsuffix .d, $(basename $(OBJS)))

# We use addsuffix to add the .d extension to the object files

CFLAGS  	= -Wall -Wextra -Werror -W -O3 -Ofast -g3

# -W = Warnings
# -03, -0fast, -g3 = Fast comp

RMV			= rm -f

#===========================RULES===========================

$(OBJ_DIR)%.o: %.c
	mkdir -p $(dir $@)
	$(CC) -MT $@ -MMD -MP $(INCLUDE) $(CFLAGS) -c $< -o $@

# -c $< = Compile the source file
# $< = first dependency
# $^ = all dependencies
# $> = first target
# $? = all dependencies newer than target
# %.o: %.c = target: dependencies

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

clean:
				$(RMV) -r $(OBJ_DIR)
fclean:			clean
				$(RMV) $(NAME)

re:				fclean all

#=======================CLARIFICATIONS=======================

.PHONY: all clean fclean re 

# .PHONY is used to avoid conflicts with files named clean, fclean, re, all