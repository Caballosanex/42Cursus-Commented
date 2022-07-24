# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexsanc <alexsanc@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 14:07:18 by alexsanc          #+#    #+#              #
#    Updated: 2022/07/24 14:09:15 by alexsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = rush-02

FOLDER = main.c atoi.c deconu.c ft_split.c write_data.c

INCLUDE = ${SRC:.c=.o}

GCCFLAGS = -Wall -Werror -Wextra

${FILE}: ${INCLUDE}
	gcc -o ${FILE} ${FOLDER} -Iincludes ${GCCFLAGS}

fclean:
	rm -f ${FILE}
