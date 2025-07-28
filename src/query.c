#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "query.h"

Query* build_query(InputBuffer* input_buffer) {
  Query* query = malloc(sizeof(Query));

  if (strcmp(input_buffer->buffer, "insert") == 0) {
    query->type = INSERT;
  } else if (strcmp(input_buffer->buffer, "select") == 0) {
    query->type = SELECT;
  } else {
    query->type = UNKNOWN;
  }

  // Копируем строку
  query->body = malloc(strlen(input_buffer->buffer) + 1);
  strcpy(query->body, input_buffer->buffer);

  return query;
}

void free_query(Query* query) {
  if (query) {
    free(query->body);
    free(query);
  }
}
