# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimin <jimin@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:08:03 by jimin             #+#    #+#              #
#    Updated: 2023/01/11 10:33:58 by jimin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98




SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)
DEP     = $(patsubst %.c, %.d, $(SRCS))

-include $(DEP)

%.o: %.cpp
	$(CXX) -MMD -MP -c $< -o $@

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

.PHONY: all clean fclean re
