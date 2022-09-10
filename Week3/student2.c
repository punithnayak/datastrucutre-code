#include<stdio.h>
#include<stdlib.h>

typedef struct{
       int day;
       char *month;
       int year;
   }dob;

typedef struct{
       int reg;
       char *name;
       char address[80];
   }sinfo;

typedef struct{
       char *cname;
       char uniname[80];
   }college;

typedef struct
{
   dob sdob;
   sinfo info;
   college col;
}student;

void read(student *s, int n){
    for (int i = 0; i < n; i++)
    {
        char *name = (char*)calloc(10,sizeof(char));
        char *month = (char*)calloc(10,sizeof(char));
        char *cname = (char*)calloc(10,sizeof(char));
        printf("Enter the name of the student: ");
        scanf("%s", name);
        (s+i)->info.name = name;
        printf("Enter Registration Number: ");
        scanf("%d", &(s+i)->info.reg);
        printf("Enter address: ");
        scanf("%s", (s+i)->info.address);
        printf("Enter date of birth: ");
        scanf("%d", &(s+i)->sdob.day);
        printf("Enter month: ");
        scanf("%s", month);
        (s+i)->sdob.month = month;
        printf("Enter year: ");
        scanf("%d", &(s+i)->sdob.year);
        printf("Enter College Name: ");
        scanf("%s", cname);
        (s+i)->col.cname = cname;
        printf("Enter University Name: ");
        scanf("%s", (s+i)->col.uniname);
    }
}

void display(student *s, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Details of student %d are:\n", i+1);
        printf("Name: %s\n", (s+i)->info.name);
        printf("Address: %s\n", (s+i)->info.address);
        printf("DOB: %d %s %d\n", (s+i)->sdob.day, (s+i)->sdob.month, (s+i)->sdob.year);
        printf("College name: %s\n", (s+i)->col.cname);
        printf("University name: %s\n", (s+i)->col.uniname);
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("n= %d", n);
    student *s = (student*)calloc(n,sizeof(student));
    read(s,n);
    printf("Details of the students are: \n");
    display(s,n);
    return 0;
}

