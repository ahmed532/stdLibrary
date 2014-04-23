CC = g++
CFLAGS = -std=c++0x

user: user.o Vector.o
	$(CC) $(CFLAGS) -o user user.o Vector.o
user.o: user.cpp Vector.h
	$(CC) $(CFLAGS) -c user.cpp
Vector.o: Vector.cpp Vector.h
	$(CC) $(CFLAGS) -c Vector.cpp
clean:
	rm -rf user.o Vector.o user
