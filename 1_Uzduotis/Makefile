#This is a Makefile

CC:=gcc
BIN_SRC:=src/main.c src/menu.c
BIN_OBJ:=$(BIN_SRC:.c=.o)
LIB_SRC:=lib/file_reader.c
LIB_OBJ:=$(LIB_SRC:.c=.o)
LIB:=libfile_reader.so
BIN:=program

CFLAGS:= -Wall
LIBFLAGS:= -fpic -shared

PREFIX?=/usr

.PHONY: all clean

all:
	$(MAKE) -C lib all
	$(MAKE) -C src all

install:
	$(MAKE) -C lib install

uninstall:
	$(MAKE) -C lib uninstall
clean:
	$(MAKE) -C src clean
	$(MAKE) -C lib clean
