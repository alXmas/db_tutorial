#include <string.h>
#include "command.h"

Command build(InputBuffer* input_buffer) {
  if (strcmp(input_buffer->buffer, ".exit") == 0) {
    return EXIT;
  } else {
    return UNRECOGNIZED;
  }
}

