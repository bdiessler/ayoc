CC = gcc
CFLAGS = -Wall -Wextra -pedantic

TARGETS = ej1 ej3 ej4

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)

.PHONY: all clean
