#include <stdio.h>  
# define max 6

typedef struct{
    int queue[max];
    int front;  
    int rear;
}queue;
     
// function to insert an element in a circular queue  
void enqueue(queue *q, int element)  
    {  
        if(q->front==-1 && q->rear==-1)   // condition to check queue is empty  
        {  
            q->front=0;  
            q->rear=0;  
            q->rear = element;  
        }  
        else if((q->rear+1)%max==q->front)  // condition to check queue is full  
        {  
            printf("Queue is overflow..");  
        }  
        else  
        {  
            q->rear=(q->rear+1)%max;       // rear is incremented  
            q->rear = element;     // assigning a value to the queue at the rear position.  
        }  
    }  
      
    // function to delete the element from the queue  
    int dequeue(queue *q)  
    {  
        if((q->front==-1) && (q->rear==-1))  // condition to check queue is empty  
        {  
            printf("\nQueue is underflow..");  
        }  
     else if(q->front==q->rear)  
    {  
       printf("\nThe dequeued element is %d", q->front);  
       q->front=-1;  
       q->rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is %d", q->front);  
        q->front=(q->front+1)%max;  
    }  
    }  
    // function to display the elements of a queue  
    void display(queue q)  
    {  
        if(q.front==-1 && q.rear==-1)  
        {  
            printf("\n Queue is empty..");  
        }  
        else  
        {  
            printf("\nElements in a Queue are :");  
            for(int i=q.front;i!=q.rear;i=i+1%max){
                printf("%d\n",q.front);
            }
{
printf("%d\n",q.x[i]);
}
        }  
    }  
    int main()  
    {  
        int choice=1,x;   // variables declaration  
        queue q;
        q.front = -1;
        q.rear = -1;
        while(choice<4 && choice!=0)   // while loop  
        {  
        printf("\n Press 1: Insert an element");  
        printf("\nPress 2: Delete an element");  
        printf("\nPress 3: Display the element");  
        printf("\nEnter your choice\n");  
        scanf("%d", &choice);  
          
        switch(choice)  
        {  
              
            case 1:  
          
            printf("Enter the element which is to be inserted: ");  
            scanf("%d", &x);  
            enqueue(&q, x);  
            break;  
            case 2:  
            dequeue(&q);  
            break;  
            case 3:  
            display(q);  
      
        }}  
        return 0;  
    }  