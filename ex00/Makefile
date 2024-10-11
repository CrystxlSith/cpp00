# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 11:52:27 by jopfeiff          #+#    #+#              #
#    Updated: 2024/10/11 08:41:19 by jopfeiff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = ${SRCS:.cpp=.o}
EXEC = megaphone
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: megaphone

megaphone: $(OBJS)
	echo "${CYAN}Compiling Megaphone...${RESET}"
	${CC} ${FLAGS} ${SRCS} -o ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"
clean:
	echo "${RED}Cleaning Megaphone...${RESET}"
	${RM} ${OBJS}
	echo "${GREEN}Succes!!!${RESET}"
fclean:
	echo "${RED}Cleaning Megaphone...${RESET}"
	${RM} ${OBJS}
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"