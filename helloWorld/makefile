OBJS = helloWorld.o
CC = g++ -std=c++11
CFLAGS = -Wall -c
LFLAGS = -Wall

hello : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o hello

helloWorld.o : helloWorld.cpp
	$(CC) $(CFLAGS) helloWorld.cpp
clean:
	\rm *.o hello

