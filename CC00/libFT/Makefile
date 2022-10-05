# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 12:06:35 by alexsanc          #+#    #+#              #
#    Updated: 2022/10/05 13:00:42 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#===========================NAME============================

NAME	= libft.a
BNUS	= .bonus

#=========================VARIABLES=========================

INCLUDE	= -I ./

SRCS	  =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
				ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	  = 	$(SRCS:.c=.o)
DEPS	= $(SRCS:.c=.d)

BONUS	  = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUSOBJS = 	$(BONUS:.c=.o)
BONUSDEPS	= $(BONUS:.c=.d)


CFLAGS  	  =	-Wall -Wextra -Werror -W -O3 -Ofast -g3

RMV	  	  =		rm -f

#===========================RULES===========================

%.o: %.c
	$(CC) -MT $@ -MMD -MP $(INCLUDE) $(CFLAGS) -c $< -o $@

# $< = Primer parametro de la rule.
# $^ = Todos los parametros de la rule.
# $> = Ultimo parametro de la rule.
# $? = ////
# $@ = Rule name

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

-include $(BONUSDEPS)

clean:
				$(RMV) $(OBJS) $(BONUSOBJS) $(DEPS) $(BONUSDEPS)

fclean:			clean
				$(RMV) $(NAME) $(BNUS)

re:				fclean all

#=======================CLARIFICATIONS=======================

.PHONY: all clean fclean re bonus
