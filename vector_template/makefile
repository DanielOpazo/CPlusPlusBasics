OBJS = main.o
CC = g++ -std=c++11
CFLAGS = -Wall -c
LFLAGS = -Wall

out: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o out

main.o : main.cpp vector.h
	$(CC) $(CFLAGS) main.cpp

clean:
	\rm *.o out
