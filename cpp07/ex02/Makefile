# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimin <jimin@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:08:03 by jimin             #+#    #+#              #
#    Updated: 2023/01/12 20:48:09 by jimin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)
DEPS    = $(patsubst %.cpp, %.d, $(SRCS))

-include $(DEPS)

%.o: %.cpp
	$(CXX) -MMD -MP -c $< -o $@

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

.PHONY: all clean fclean re
