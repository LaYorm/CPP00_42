NAME = megaphone
CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs/

SRCS= megaphone.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJS)
		$(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp
		@mkdir -p $(OBJ_DIR)
		$(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ_DIR)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re