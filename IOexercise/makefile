OBJS = main.o readers.o writers.o
CC = g++ -std=c++11
CFLAGS = -Wall -c
LFLAGS = -Wall

out: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o out

main.o : main.cpp readers.h writers.h
	$(CC) $(CFLAGS) main.cpp

writers.o : writers.cpp writers.h
	$(CC) $(CFLAGS) writers.cpp

clean:
	\rm *.o out
