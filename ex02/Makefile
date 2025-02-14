NAME = animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
OBJDIR = obj

SRCS = main.cpp \
       Cat.cpp \
       Dog.cpp \
       Animal.cpp \
	   Brain.cpp

OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re