#This is a lib Makefile
CC:=gcc
LIB_SRC:=file_reader.c
LIB_OBJ:=$(LIB_SRC:.c=.o)
LIB:=libfile_reader.so

CFLAGS:=-Wall -g -fPIC -shared


PREFIX?=/usr

.PHONY: all clean install uninstall

all:$(LIB)

$(LIB):$(LIB_OBJ) 
	$(CC) $(CFLAGS) -o $(LIB) $^

install:$(LIB)
	install -d $(PREFIX)/include $(PREFIX)/lib
	install -m 644 $(LIB_OBJ) $(PREFIX)/include
	install -m 644 $(LIB) $(PREFIX)/lib

uninstall:
	$(RM) $(PREFIX)/include/$(LIB_OBJ)
	$(RM) $(PREFIX)/lib/$(LIB)

clean:
	$(RM) $(LIB) $(LIB_OBJ)

