CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

SRCS = operations.cpp Cmds.cpp obliviax.cpp
OBJS = $(SRCS:.cpp=.o)

all: obliviax

obliviax: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm *.o
	find . -type f -name "*.exe" ! -name "obliviax.exe" -exec rm {} +
