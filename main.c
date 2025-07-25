#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input_buffer.h"
#include "meta_command.h"

void call_metada_command(InputBuffer* input_buffer) {
  MetaCommand command = do_meta_command(input_buffer);

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
      call_metada_command(input_buffer);
    }
  }
}

