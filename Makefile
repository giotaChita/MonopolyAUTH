#Makefile 
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = monopoly
SOURCES = $(wildcard *.cpp)
HEADERS = $(wildcard *.h)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run