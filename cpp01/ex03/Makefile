
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = War

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

HumanA.o : HumanA.cpp HumanA.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
HumanB.o : HumanB.cpp HumanB.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
Weapon.o : Weapon.cpp Weapon.hpp	
	$(CXX) $(CXXFLAGS) -c $< -o $@
main.o : main.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all