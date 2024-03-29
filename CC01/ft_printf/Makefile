# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 18:20:58 by alexsanc          #+#    #+#              #
#    Updated: 2023/02/13 18:25:43 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

OBJ_DIR = obj/

#=========================VARIABLES=========================

INCLUDE	= -I ./

# Specifies that the current directory (.) should be searched for header files.

W_FLAGS			:= -Wall -Wextra -Werror
SANITIZER		:= -g -fsanitize=address
CFLAGS  	= $(W_FLAGS) $(SANITIZER) -W -O3 -Ofast -g3

# -W = Warnings
# -03, -0fast, -g3 = Fast comp

SRCS		= ft_putchar.c ft_putstr.c ft_putnbr.c ft_ptr.c\
			ft_hexa_l.c ft_hexa_u.c ft_printf.c

OBJS		= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS		= $(addsuffix .d, $(basename $(OBJS)))

# We use addsuffix to add the .d extension to the object files

RMV			= rm -f

#===========================RULES===========================

$(OBJ_DIR)%.o: %.c
	mkdir -p $(dir $@)
	$(CC) -MT $@ -MMD -MP $(INCLUDE) $(CFLAGS) -c $< -o $@

# -MT $@ = The target file
# -MMD = Create a dependency file
# -MP = Create a phony target for each dependency other than the main target
# -c $< = Compile the source file
# $< = first dependency
# $^ = all dependencies
# $> = first target
# $? = all dependencies newer than target
# $@ = Rule name
# %.o: %.c = target: dependencies

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

# -include is used to include the dependencies

clean:
				$(RMV) -r $(OBJ_DIR)
fclean:			clean
				$(RMV) $(NAME)

re:				fclean all

#=======================CLARIFICATIONS=======================

.PHONY: all clean fclean re

# .PHONY is used to avoid conflicts with files named clean, fclean, re, all
