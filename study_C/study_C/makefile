# Makefile for dynamic C file compilation

SOURCES = $(wildcard *.c)   # カレントディレクトリ内の全ての .c ファイル
TARGETS = $(filter-out callib Sample_8-1, $(SOURCES:.c=))

CC = gcc
CFLAGS = -o

all: $(TARGETS) #Sample_8-1

# 各 .c ファイルに対応する汎用ビルドルール
$(TARGETS): %: %.c
	$(CC) $< $(CFLAGS) $@

# 特定ターゲット Sample_8-1 のビルドルール
#Sample_8-1: Sample_8-1.c callib.c
#	$(CC) Sample_8-1.c callib.c $(CFLAGS) Sample_8-1

clean:
	rm -f $(TARGETS) Sample_8-1