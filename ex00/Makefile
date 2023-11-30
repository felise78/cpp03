# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 19:28:45 by hemottu           #+#    #+#              #
#    Updated: 2023/11/27 19:52:29 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# color codes
RESET		=	\033[0m
GREEN		=	\033[32m

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp \
		ClapTrap.cpp
		
NAME = claptrap
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)  ____ ____  ____   ___ _____              ___   ___  \n$(RESET)"
	@printf "$(GREEN) / ___|  _ \|  _ \ / _ \___ /    _____  __/ _ \ / _ \ \n$(RESET)"
	@printf "$(GREEN)| |   | |_) | |_) | | | ||_ \   / _ \ \/ / | | | | | |\n$(RESET)"
	@printf "$(GREEN)| |___|  __/|  __/| |_| |__) | |  __/>  <| |_| | |_| |\n$(RESET)"
	@printf "$(GREEN) \____|_|   |_|    \___/____/   \___/_/\_\\____/ \___/\n$(RESET)"
	@printf "\n"

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

%.o : %.cpp
	c++ $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all
