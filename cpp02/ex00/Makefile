# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 13:12:40 by wxuerui           #+#    #+#              #
#    Updated: 2023/05/16 13:58:16 by wxuerui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed
CXX		=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
SRCS	=	$(wildcard *.cpp)
OBJS	=	$(SRCS:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)