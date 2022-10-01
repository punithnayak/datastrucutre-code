#include <stdio.h>
#define MAX 10
#include <string.h>
typedef struct 
{
	char stack[MAX];
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
		printf("%c",s->stack[i]);
	}
}
int main(int argc, char const *argv[])
{
	stack s;
    s.top = -1;
    int check = 1;

    char c[10];
    printf("Enter the string: ");
    scanf(" %s", c);

    for (int i = 0; i < strlen(c); i++)
    {
        push(&s, c[i]);
    }

    for (int i = 0; i < strlen(c); i++)
    {
        if(s.stack[s.top] == c[i]){
            pop(&s);
            check = 1;
        }
        else{
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        printf("Palindrome...");
    }
    else{
        printf("Not Palindrome...");
    }

    return 0;





	
}