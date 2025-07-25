#ifndef META_COMMAND_H
#define META_COMMAND_H

#include "input_buffer.h"

typedef enum {
  EXIT,
  UNRECOGNIZED
} MetaCommand;

MetaCommand do_meta_command(InputBuffer* input_buffer);

#endif
