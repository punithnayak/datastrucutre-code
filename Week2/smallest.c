#include<stdio.h>
#include<stdlib.h>

int smallest(int *a, int n){
    int small;
    small = *a;
    a+1;
    for (int i = 1; i < n; i++, a++)
    {
        if (small > *a)
        {
            small = *(a);
        }
        
    }
    return small;
}

int main(int argc, char const *argv[])
{
    int *p, *first, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = (int *) calloc(n, sizeof(int));
    first = p;
    printf("Enter the array: ");
    for (int i = 0; i < n; i++, p++)
    {
        scanf("%d", p);
    }
    p = first;
    printf("Entered elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
    int small = smallest(first, n);
    printf("\nSmallest element is: %d", small);

    return 0;
}
