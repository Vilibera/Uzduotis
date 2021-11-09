#This is a src Makefile

BIN:=program
SRC:= $(wildcard *.c)
OBJ:=$(SRC:.c=.o)


CFLAGS:=-Wall
LDFLAGS:= -L../lib -lfile_reader
CPPFLAGS:= -I ../lib 

.PHONY: all clean

all:$(BIN)

$(BIN):$(OBJ) 
	$(CC) $(CPPFLAGS)  $(CFLAGS) -o $@ $^ $(LDFLAGS)


clean:
	$(RM) $(BIN) $(OBJ)
