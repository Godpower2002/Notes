#ifndef STACK_H
#define STACK_H

typedef struct stack_node stack_node_t;


struct stack_node{
    int value;
    struct stack_node_t *prev;
};


typedef struct stack{
    stack_node_t *top;
    int size;


}stack_t

int stack_init(stack_t *s)
{
    s->top = NULL;
    s->size = 0;
    return 0;
}
int stack_delete(stack_t *s){
    int i;
  //  while (!stack_pop(s, &i));
    while(s->top){
        n = s->top;
        s->top = n->prev;
        free(n);
    }
}
int stack_push(stack_t *s, int v){
    stack_node_t *n = malloc(sizeof(*n));
    n->value = v;
    n-> prev = s-> top;
    s->top = n;
    s->size++;
    return 0;
}
int stack_pop(stack_t *s, int *v){
    stack_node_t *n;
    if(!s->size){//All comparisons have a 0 value if false
      return 1;  
    }
    n = s->top;
    s->top = s->top->prev; // s->top = n->prev;
    *n = s->top->value;s
    s->size--;
    free(n);
    return 0;
}
int stack_peek(stack_t *s, int *v){
    if(!s->size){//All comparisons have a 0 value if false
      return 1;  
    }
    *v = s->top->value;
    return 0;
}
int stack_is_empty(stack_t *s){
    return(!s->size);
}
int stack_size(stack_t *s){

}


#endif