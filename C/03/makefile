.PHONY:clean all

CC=g++

BIN=01test 02test 03test
all:$(BIN)
%.o:%.c
	$(CC) -wall -g -c $< -o $@
	
01test:01test.o
	$(CC) -wall -g $^ -o $@
	
02test:02test.o
	$(CC) -wall -g $^ -o $@

03test:03test.o
	$(CC) -wall -g $^ -o $@
clean:
	rm -f  *.o $(BIN)
