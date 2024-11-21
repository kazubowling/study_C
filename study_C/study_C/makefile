# Makefile for dynamic C file compilation

SOURCES = $(wildcard *.c)   # カレントディレクトリ内の全ての .c ファイル
TARGETS = $(SOURCES:.c=)    # .c を取り除いたターゲット名

CC = gcc
CFLAGS = -o

all: $(TARGETS)

# 各 .c ファイルに対応するターゲットのビルドルール
$(TARGETS): %: %.c
	$(CC) $< $(CFLAGS) $@

clean:
	rm -f $(TARGETS)
