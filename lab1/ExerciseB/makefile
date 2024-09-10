# Compiler and flags
CXX = g++  # Use CXX for C++ compiler
CXXFLAGS = -Wall -Werror -std=c++11  # Adjust C++ standard as needed

# Executable name
TARGET = myprogram

# Source files
SOURCES = exBmain.cpp dictionaryList.cpp mystring_B.cpp

# Object files (derived from source files)
OBJECTS = $(SOURCES:.cpp=.o)

# Default target (build the executable)
all: $(TARGET)

# Rule to link the object files into the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# Rule to compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Phony target to clean up (remove executable and object files)
clean:
	rm -f $(TARGET) $(OBJECTS)