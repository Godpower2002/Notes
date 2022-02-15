#include <stdlib.h>
#include "stack.h"

int stack_init(stack_t *s){
    s->top = NULL;
    s->size = 0;
    return 0;
    }
int stack_delete(stack_t *s){
    
    return 0;
    }
int stack_push(stack_t *s, int v){
    stack_node_t *n = malloc(sizeof(*n))
    n-> value = v;
    n-> prev = s->top;
    s->top = n;
    s->size++;
    return 0;
}
int stack_pop(stack_t *s, int *v){
    return 0;
}
int stack_peek(stack_t *s, int *v){
    return 0;
}
int stack_is_empty(stack_t *s){
    return 0;
}