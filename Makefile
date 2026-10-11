CC = gcc
CFLAGS = -Wall -Wextra
TARGET = build/index
SRC = src

all: $(TARGET)

$(TARGET): $(SRC)/index.c
	@mkdir -p build
	@$(CC) $(CFLAGS) $(SRC)/index.c -o $(TARGET)

run: all
	@./$(TARGET)

watch:
	@find $(SRC) -type f | entr -c $(MAKE) --no-print-directory run

clean:
	@rm -rf build

.PHONY: all run watch clean
