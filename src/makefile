CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

SRCS = ObliviaxInfo.cpp Cmds.cpp operations.cpp obliviax.cpp
OBJS = $(SRCS:.cpp=.o)

all: obliviax clean

obliviax: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm *.o
	find . -type f -name "*.exe" ! -name "obliviax.exe" -exec rm {} +
