CFLAGS=-Wall -g
EXE=mov_at
C_FILE=mov_at.c
CC=clang

all: $(EXE)

$(EXE): $(C_FILE)
	$(CC) $(CFLAGS) $(C_FILE) -lncurses -o $(EXE)
 
clean:
	rm -rf *.o $(EXE)
