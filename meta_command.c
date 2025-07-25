#include <string.h>
#include "meta_command.h"

MetaCommand do_meta_command(InputBuffer* input_buffer) {
  if (strcmp(input_buffer->buffer, ".exit") == 0) {
    return EXIT;
  } else {
    return UNRECOGNIZED;
  }
}

