#ifndef QUERY_H
#define QUERY_H
#include "input_buffer.h"

typedef enum { INSERT, SELECT, UNKNOWN } Type;

typedef struct {
  Type type;
  char* body;
} Query;

Query* build_query(InputBuffer *input_buffer);
void free_query(Query* query);

#endif
