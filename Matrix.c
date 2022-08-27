#include <stdio.h>

void Prod(int a[][80], int b[][80], int m1, int m2, int n2)
{
    int c[80][80], sum=0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                sum += a[i][k] * b[k][j];             
            }

            c[i][j] = sum;
            sum = 0;
        }
        
            
    }

    printf("Product of matrix is: \n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
           printf("%d ", c[i][j]); 
        }
        printf("\n");     
    }
}

void create(int a, int b)
{
   
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           scanf("%d", &a[i][j]); 
        }     
    } 
}

void print(int a, int b){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           printf("%d ", a[i][j]); 
        }
        printf("\n");     
    }
}

int main()
{
    int a[80][80], b[80][80];
    int m1, n1, m2, n2;

    printf("Enter the row of matrix A: \n");
    scanf("%d", &m1);
    printf("Enter the column of matrix A: \n");
    scanf("%d", &n1);
    printf("Enter the matrix A: \n");
    create(m1, n1)

    printf("Enter the row of matrix B: \n");
    scanf("%d", &m2);
    printf("Enter the column of matrix B: \n");
    scanf("%d", &n2);
    printf("Enter the matrix B: \n");
    create(m2.n2);

    printf("Matrix A is: \n");
    print(m1, n1); 

    printf("Matrix B is: \n");
    print(m2,n2);


    if(n1 == m2)
    {
        Prod(a, b, m1, m2, n2);
    }
    else{
        printf("Cannot multiply\n");
    }


    return 0;
}