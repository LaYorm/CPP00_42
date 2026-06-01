NAME = Dream
CFLAGS = c++ -Wextra -Werror -Wall -std=c++98

OBJ_DIR = objs/

SRC_FILES = Account.cpp tests.cpp

OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
			$(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp
			@mkdir -p $(OBJ_DIR)
			$(CFLAGS) -c $< -o $@

clean :
			rm -rf $(OBJ_DIR)

fclean : clean
			rm $(NAME)

re : fclean all

.PHONY :	fclean clean re