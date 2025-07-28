build:
	gcc src/main.c src/input_buffer.c src/command.c src/query.c -o main -std=gnu99 -Wall -Wextra -Werror -g -O0

clean:
	rm -f main

.PHONY: build clean
