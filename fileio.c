#include <stdio.h>

typedef enum{
  //The rule for enum is that if not initialized, the value will be the one above it + 1
  read_binary,
  write_binary,
  read_text,
  write_text
}action_t
