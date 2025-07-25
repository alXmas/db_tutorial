build:
	gcc src/main.c src/meta_command.c src/input_buffer.c -o main -std=gnu99 -Wall -Wextra -Werror -g -O0
