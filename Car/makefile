OBJS = main.o car.o util.o
CC = g++ -std=c++11
CFLAGS = -Wall -c
LFLAGS = -Wall

out: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o out

main.o : main.cpp car.h types.h util.h
	$(CC) $(CFLAGS) main.cpp

car.o: car.cpp car.h types.h
	$(CC) $(CFLAGS) car.cpp

util.o: util.cpp util.h types.h car.h
	$(CC) $(CFLAGS) util.cpp

clean:
	\rm *.o out
