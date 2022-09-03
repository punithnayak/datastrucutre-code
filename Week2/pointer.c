#include<stdio.h>
#include<stdlib.h>

int *allocate(int n){
    int *p = (int *) calloc(n, sizeof(int));
    return p;
}

int print(int *p, int n){
    for (int i = 0; i < n; i++, p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}


int main(int argc, char const *argv[])
{
    int n, *first;
    int *p, **q;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = allocate(n);
    first = p;
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = first;
    printf("Entered elements are: ");
    print(p, n);

    *q = p;
    printf("First element of the array: %d", **q);
    

    return 0;
}
