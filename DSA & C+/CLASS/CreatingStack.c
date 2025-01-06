#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int count = 0;

struct stack{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack( st *s){
    s->top = -1;
}