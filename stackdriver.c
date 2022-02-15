#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv){
    stack_t s;
    stack_init(&s);
    
    stack_push(&s, 0);
    stack_push(&s, 1);
    stack_push(&s, 2);
    stack_push(&s, 3);
    stack_push(&s, 4);

    while(!stack_is_empty(&s)){
        stack_pop(&s,&i);
        prinf("Popped %d\n",i);
    }


    do{
        scanf("%d",&i);
        stack_push(&s,i);
    }while(i != -1);

    return 0;
}