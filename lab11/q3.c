#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char data;
    struct node *left, *right;
}node1;


typedef struct
{
	node1 * arr[100];
	int top;
}stack;

void push(stack *s, node1 *n)
{
	if((s->top+1)<100)
		s->arr[++(s->top)]=n;
	else
		printf("Overload!\n");
}

node1 * pop (stack*s)
{
	if(s->top >= 0)
		return s->arr[(s->top)--];
	else
		return NULL;
}

void inorder(node1* root)
{
	if(root==NULL)
		return;
	
	inorder(root->left);
	printf("%c ",root->data );
	inorder(root->right);
}

int isOperator(char c)
{
	switch(c)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^': return 1;
		default : return 0;
	}
}


int main()
{
	char postfix[100];
	
	printf("Enter the postfix expression:\n");
	scanf(" %[^\n]s",postfix);
	
	int i=0;
	stack s;
	s.top=-1;
	node1* n;
	node1* op1;
	node1* op2;
	
	for(;postfix[i]!='\0';i++)
	{
		n = (node1*)malloc(sizeof(node1));
		n->data=postfix[i];
		if(!isOperator(postfix[i]))
		{
			n->left=n->right=NULL;
			push(&s,n);
		}
		
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			n->left=op1;
			n->right=op2;
			push(&s,n);
		}
	}
	
	printf("The resultant tree is:\n");
	
	node1 *root=pop(&s);
	
	inorder(root);
	
	printf("\n");
	
	printf("Root node data is: %c\n",root->data);
	
	return 0;
}
