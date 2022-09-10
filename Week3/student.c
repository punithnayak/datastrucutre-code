#include<stdio.h>
#include<stdlib.h>

typedef struct
{
   char name[80];
   int rno;
   float cgpa;
}student;

void read(student *s, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", (s+i)->name);
        printf("Enter the roll number: ");
        scanf("%d", &(s+i)->rno);
        printf("Enter CGPA: ");
        scanf("%f", &(s+i)->cgpa);
    }
}

void display(student *s, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Details of students %d are:\n", i+1);
        printf("Name: %s\n", (s+i)->name);
        printf("Roll Number: %d\n", (s+i)->rno);
        printf("CGPA: %f\n", (s+i)->cgpa);
    }
    
}

void sort(student *s, int n){
    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((s+i)->rno > (s+j)->rno)
            {
                student temp = *(s+i);
                *(s+i) = *(s+j);
                *(s+j) = temp;
            }  
        }    
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student *s = (student*)calloc(n,sizeof(student));
    read(s,n);
    printf("Details of the students are: \n");
    display(s,n);
    sort(s,n);
    printf("After sorting: ");
    display(s,n);
    return 0;
}

