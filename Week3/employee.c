#include<stdio.h>
#include<stdlib.h>

typedef struct{
       int day;
       int month;
       int year;
   }dob;

typedef struct{
       int hno;
       int zcode;
       char state[80];
   }address;

typedef struct
{
   char name[80];
   dob edob;
   address eadd;
}employee;

void read(employee *e, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the employee: ");
        scanf("%s", (e+i)->name);
        printf("Enter Date of Birth in dd/mm/yy");
        scanf("%d/%d/%d", &(e+i)->edob.day, &(e+i)->edob.month, &(e+i)->edob.year);
        printf("Enter Employee's house number: ");
        scanf("%d", &(e+i)->eadd.hno);
        printf("Enter Employee's zip code: ");
        scanf("%d", &(e+i)->eadd.zcode);
        printf("Enter Employee's state: ");
        scanf("%s", (e+i)->eadd.state);
    }
}

void display(employee *e, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Details of employee %d are:\n", i+1);
        printf("Name: %s\n", (e+i)->name);
        printf("DOB: %d/%d/%d\n", (e+i)->edob.day, (e+i)->edob.month, (e+i)->edob.year);
        printf("Address: %d, %d, %s\n", (e+i)->eadd.hno, (e+i)->eadd.zcode, (e+i)->eadd.state);
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    employee *e = (employee*)calloc(n,sizeof(employee));
    read(e,n);
    printf("Details of the employee are: \n");
    display(e,n);
    return 0;
}

