#include <stdio.h>
#define MAX 10

typedef struct{
    char stack[MAX];
    int top;
}stack;

int full(int top){
    if(top == MAX){
        return 1;
    }
    return 0;
}

int empty(int top){
    if(top == -1){
        return 1;
    }
    return 0;
}

void display(stack *s){
    for (int i = s->top; i >= 0 ; i--)
    {
        printf("%d\n", s->stack[i]);
    }   
}

void push(stack *s){
    int val;
    printf("\nEnter the value:");
    fflush(stdin);
    scanf(" %d", &val);
    if(full(s->top)){
        printf("Stack Overflow...");
        return;
    }
    s->top++;
    s->stack[s->top] = val;
    display(s);
}

void pushTwo(stack *s, int val){
    s->top++;
    s->stack[s->top] = val;
}

int pop(stack *s){
    if(empty(s->top)){
        printf("Stack Underflow..");
        return 0;
    }
    printf("Poped value is: %d\n", s->stack[s->top]);
    s->top--;
    return s->stack[s->top];
}




int main(int argc, char const *argv[])
{
    stack s1;
    stack s2;
    s1.top = -1;
    s2.top = -1;
    int x = 1;
    int n;
    printf("Enter size of queue: ");
    scanf("%d", &n);
    printf("Enter Queue: ");
    for (int i = 0; i < n; i++)
    {
        push(&s1);
    }
    for (int i = 0; i < n; i++)
    {
        int val = pop(&s1);
        printf("val = %d\n", val);
        pushTwo(&s2, val+1);
        display(&s2);
    }
    
    printf("Printing Queue: \n");
    display(&s2);

    return 0;
}
