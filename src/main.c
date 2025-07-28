#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input_buffer.h"
#include "command.h"
#include "query.h"

void call_command(InputBuffer* input_buffer) {
  Command command = build(input_buffer);

  switch (command) {
    case EXIT:
      printf("Bye!\n");
      exit(EXIT_SUCCESS);
      break;
    case UNRECOGNIZED:
      printf("Unrecognized command '%s'\n", input_buffer->buffer);
      break;
  }
}

int main() {
  InputBuffer* input_buffer = new_input_buffer();
  while (true) {
    print_prompt();
    read_input(input_buffer);

    if ((input_buffer->buffer[0]) == '.') {
      call_command(input_buffer);
    } else {
      Query* query = build_query(input_buffer);
      printf("Query type: %d\n", query->type);
      printf("Query body: %s\n", query->body);

      if (query->type == UNKNOWN) {
        printf("Unrecognized command: %s\n", query->body);
      }

      free_query(query);
    }
  }
}

