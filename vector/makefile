OBJS = main.o vector.o
CC = g++ -std=c++11
CFLAGS = -Wall -c
LFLAGS = -Wall

out: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o out

main.o : main.cpp vector.h
	$(CC) $(CFLAGS) main.cpp

vector.o : vector.cpp vector.h
	$(CC) $(CFLAGS) vector.cpp

clean:
	\rm *.o out
