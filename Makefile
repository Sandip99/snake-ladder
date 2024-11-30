CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./include
SRC = main.cpp Board.cpp Game.cpp Ladder.cpp Player.cpp Ladder.cpp Snake.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
