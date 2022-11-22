# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimin <jimin@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:08:03 by jimin             #+#    #+#              #
#    Updated: 2022/11/22 16:58:44 by jimin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook 
CXX = c++
#CPPFLAGS = -I$(HEADER_DIR)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

#HEADER_SRCS	= Megaphone.hpp
#HEADER_DIR	= include/
#HEADER_PATH	= $(addprefix $(HEADER_DIR), $(HEADER_SRCS))

SRCS	= phone_book.cpp
#PATH_DIR = ./src/
#PATH	= $(addprefix $(PATH_DIR), $(SRCS))

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.cpp.o :
	@$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re
