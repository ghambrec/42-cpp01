# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 19:39:18 by ghambrec          #+#    #+#              #
#    Updated: 2025/12/01 20:02:04 by ghambrec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compiling stuff
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -O2

# header files
INCLUDE = ./inc
CXXFLAGS += -I$(INCLUDE)

# program name
NAME = zombie

# source files
VPATH =	src
SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

# obejct files
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

# .cpp zu .o
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run