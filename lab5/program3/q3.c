#include<stdio.h>
#define MAX 10

typedef struct 
{
	int stack[MAX];
	int top;
}  stack;


int isFull(int top){
	if(top==MAX){
		return 1;
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

void push(stack *s,int val){
	if(isFull(s->top)){
		printf("stack overflow \n");
		return ;
	}
	s->top++;
	s->stack[s->top]=val;


}

void pop(stack *s){
	if(isEmpty(s->top)){

		printf("stack underflow");
		return;
	}

	s->top--;
}


void display(stack *s){
	for (int i = s->top; i >=0; i--)
	{
		printf("%d",s->stack[i]);
	}
}
int main(int argc, char const *argv[])
{
	 stack s;
    s.top = -1;

    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    while(x>0){
        push(&s, x%2);
        x /= 2;


    }
    printf("Binary Form...");
    display(&s);
    printf("\n");
    return 0;
	
}