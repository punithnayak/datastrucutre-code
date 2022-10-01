#include <stdio.h>
#define MAX 10


typedef struct {
	char stack[MAX];
	int top;
}stack;

int isFull(stack *s){
	if (s->top==MAX){
		return  1;

	}
	else{
		return 0;
	}
}

int isEmpty(int top){
	if(top==-1){
		return 1;
	}
	return 0;
}


void push(stack *s,char val){
	if(s->top==MAX){
		printf("The stack is full");

	}
	s->top++;
	s->stack[s->top]=val;
}
void pop(stack *s){
    if(isEmpty(s->top)){
        printf("Stack Underflow..");
        return;
    }
    printf("Poped value is: %c", s->stack[s->top]);
    s->top--;
}

void display(stack *s){
	for (int i = s->top; i >=0; i--)
	{
		printf("%c",s->stack[i]);
	}
}
int main(int argc, char const *argv[])
{
	stack s;
	s.top=-1;
	int x = 1;
    int c;
    
    while(x){
        printf("Enter the operation:\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &c);
        switch(c){
            case 1:
            	 printf("Enter the string that you want to push\n");
            	char y;
            	scanf("%c",&y);
                push(&s,y);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                display(&s);
                break;
            case 4:
                printf("Exiting...");
                x = 0;
                break;
            default:
                printf("Invlaid Input");
                break;
        }
    }



	return 0;
}