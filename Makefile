CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
TARGET = structs
SRCS = main.cpp IntArray.h IntArray.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)