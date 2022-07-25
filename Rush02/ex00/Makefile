# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 14:07:18 by alexsanc          #+#    #+#              #
#    Updated: 2022/07/24 21:38:22 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = rush-02

FOLDER = main.c ft_atoi.c deconu.c

INCLUDE = ${SRC:.c=.o}

GCCFLAGS = -Wall -Werror -Wextra

${FILE}: ${INCLUDE}
	gcc -o ${FILE} ${FOLDER} -Iincludes ${GCCFLAGS}

fclean:
	rm -f ${FILE}
