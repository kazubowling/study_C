# Makefile for dynamic C file compilation

TARGET = $(basename $(wildcard *.c))  # カレントディレクトリの .c ファイルの名前（拡張子なし）
CC = gcc
CFLAGS = -o $(TARGET)

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(TARGET).c $(CFLAGS)

clean:
	rm -f $(TARGET)