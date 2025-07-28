#ifndef COMMAND_H
#define COMMAND_H

#include "input_buffer.h"

typedef enum {
  EXIT,
  UNRECOGNIZED
} Command;

Command build(InputBuffer* input_buffer);

#endif
