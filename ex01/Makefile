NAME = phonebook
CFLAGS = c++ -Wall -Werror -Wextra -std=c++98 -Iinclude

OBJ_DIR = objs/
SRC_DIR = src/

SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
		$(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ_DIR)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re
