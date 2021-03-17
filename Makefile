CC = g++
CFLAGS = -Wall -Werror -pedantic -std=c++14 -o3
OBJECTS = EditDistance.o main.o
SFMLFLAGS = -lsfml-system


all: ED

ED: $(OBJECTS)
	$(CC) $(CFLAGS) -o ED $(OBJECTS) $(SFMLFLAGS)

EditDistance.o: EditDistance.cpp EditDistance.h
	$(CC) $(CFLAGS) -c EditDistance.cpp -o EditDistance.o

main.o: main.cpp EditDistance.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o

clean:
	rm ED *.o
