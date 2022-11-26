#include<stdio.h>
#include<stdlib.h>

typedef struct bst* node;

typedef struct bst{
	
	int data;
	node left,right;

}bst;


node getnode(){
	
	node temp = (node)malloc(sizeof(bst));
    return temp;
}


void insert(node* root,int val){
	
	node head= *root;
	node temp= getnode();
	node parent=NULL;

	temp->data=val;
	temp->left=temp->right=NULL;
	 if(head == NULL){
        head = temp;
        *root = head;
        return;
    }
    while(head != NULL){
        parent = head;
        if(val > head->data){
            head = head->right;
        }
        else{
            head = head->left;
        }
    }
    if(val > parent->data){
        parent->right = temp;
    }
    else{
        parent->left = temp;
    }
    return;
}

void inorder(node root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(node root){
    if(root){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}


int main(){
	
	node tree= NULL;
	insert(&tree,10);
	insert(&tree,30);
	insert(&tree,60);
	insert(&tree,40);
	insert(&tree,50);
	insert(&tree,20);
	insert(&tree,70);
	printf("\n INORDER:\n");
	inorder(tree);
	printf("\n PREORDER:\n");
	preorder(tree);
    printf("\n POSTORDER:\n");
	postorder(tree);
	printf("\n");
    return 0;

}