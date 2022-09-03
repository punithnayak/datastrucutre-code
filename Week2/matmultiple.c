#include<stdio.h>
#include<stdlib.h>

void Prod(int **a, int **b, int **r, int m1, int m2, int n2){
    int sum=0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                sum += a[i][k] * b[k][j];             
            }

            r[i][j] = sum;
            sum = 0;
        }
    }
    printf("Product of matrix is: \n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
           printf("%d ", r[i][j]); 
        }
        printf("\n");     
    }   
}


int **allocate(int m, int n){
    int **matrix;
    matrix = (int **) calloc(m, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        *(matrix+i) = (int *) calloc(n, sizeof(int));
    }
    return matrix;
}

int read(int **matrix, int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", matrix[i][j]);
        }   
    }
    
}
int print(int **matrix, int m, int n){
    printf("\n Inside print \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");   
    }
}

int main(int argc, char const *argv[])
{
    int n1, m1, n2, m2;
    int **A, **B, **R;
    printf("Enter row of matrix 1: ");
    scanf("%d", &m1);  
    printf("Enter column of matrix 1: ");
    scanf("%d", &n1);  
    printf("Enter row of matrix 2: ");
    scanf("%d", &m2); 
    printf("Enter column of matrix 2: ");
    scanf("%d", &n2);

    A = allocate(m1, n1);
    printf("Enter the matrix : ");
    read(A, m1, n1);  
    printf("Entered matrix is: \n");
    print(A, m1, n1);
    B = allocate(m2, n2);
    printf("Enter the matrix : ");
    read(B, m2, n2);
    printf("Entered matrix is: \n");
    print(B, m2, n2);

    if(n1 == m2)
    {
        R = allocate(m1, n2);
        Prod(A, B, R, m1, m2, n2);
    }
    else{
        printf("Cannot multiply\n");
    }


    return 0;
}
