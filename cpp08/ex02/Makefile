# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimin <jimin@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:08:03 by jimin             #+#    #+#              #
#    Updated: 2023/01/13 10:39:58 by jimin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL := all

NAME = main 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)
DEPS    = $(patsubst %.cpp, %.d, $(SRCS))

-include $(DEPS)


all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : 
	$(MAKE) fclean 
	$(MAKE) all

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re
