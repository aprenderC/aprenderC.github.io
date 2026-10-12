CC = gcc
CFLAGS = -Wall -Wextra
TARGET = build/index
SRC = src

SRC_FILES = $(shell find $(SRC) -type f)

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	@mkdir -p build
	@$(CC) $(CFLAGS) $(SRC)/index.c -o $(TARGET)

run: all
	@./$(TARGET)

watch:
	@find $(SRC) -type f | entr -d -c $(MAKE) --no-print-directory run

clean:
	@rm -rf build

.PHONY: all run watch clean
