# Makes FahrCel.exe
# JMS
# 2016
# K&R Exercise 1.15. Rewrite the temperature conversion program
# of Section 1.2 to use a function for conversion.

BIN    = String.exe
OBJ    = String.o String.o
CC     = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
INCS   = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/
include"
LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
RM     = rm -f

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

FahrCel.o: String.c String.h
	$(CC) -c String.c -o String.o $(CFLAGS)

String.o: String.h String.c
	$(CC) -c String.c -o String.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)