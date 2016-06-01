.PHONY:clean all

CC=g++

BIN=01test 03test
all:$(BIN)
%.o:%.cpp
	$(CC) -g -c $< -o $@
	
01test:01test.o
	$(CC) -g $^ -o $@
	
03test:03test.o
	$(CC) -g $^ -o $@
clean:
	rm -f  *.o $(BIN)
