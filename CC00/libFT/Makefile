# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 12:06:35 by alexsanc          #+#    #+#              #
#    Updated: 2022/10/11 13:13:20 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#===========================NAME============================

NAME	= libft.a
BNUS	= .bonus

OBJ_DIR	= obj/

#=========================VARIABLES=========================

INCLUDE	= -I ./

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
				ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS		= $(addsuffix .d, $(basename $(OBJS)))

BONUS		= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
				ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUSOBJS	= $(addprefix $(OBJ_DIR), $(BONUS:.c=.o))
BONUSDEPS	= $(addsuffix .d, $(basename $(BONUSOBJS)))

# We use addprefix to add the obj directory to the object files
# We use addsuffix to add the .d extension to the object files

CFLAGS  	= -Wall -Wextra -Werror -W -O3 -Ofast -g3
# -W = Warnings
# -03, -0fast, -g3 = Fast comp

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
				#We are using the -c (create) option to create the library file \
				the -r (add with replace) option to add the files to the library file, \
			   	and the -s (index) option to create an index of the files inside the library file

bonus: $(BNUS)

$(BNUS): $(OBJS) $(BONUSOBJS)
	@touch $@
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJS)

# @touch is made fro the bonus rule to be executed only once and avoid relink.
# ar -rcs $(NAME) $(OBJS) $(BONUSOBJS) = We are using the -c (create) option to create the library file \
				the -r (add with replace) option to add the files to the library file, \
			   	and the -s (index) option to create an index of the files inside the library file

-include $(BONUSDEPS)

# -include is used to include the dependencies of the bonus files.

clean:
				$(RMV) -r $(OBJ_DIR)

fclean:			clean
				$(RMV) $(NAME) $(BNUS)

re:				fclean all

#=======================CLARIFICATIONS=======================

.PHONY: all clean fclean re bonus

# .PHONY is used to avoid conflicts with files named clean, fclean, re, bonus, all
