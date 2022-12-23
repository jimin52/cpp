# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimin <jimin@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:08:03 by jimin             #+#    #+#              #
#    Updated: 2022/12/24 05:19:52 by jimin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS	= $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : 
	$(MAKE) fclean 
	$(MAKE) all

.cpp.o :
	@$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re
