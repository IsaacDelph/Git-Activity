C=g++
F=--std=c++17 -Wall -pedantic

all: main.cpp math.o
	$(C) $(F) main.cpp math.o -o math

math.o: math.cpp
	$(C) $(F) -c math.cpp

clean:
	rm -f *.o math
