#include <stdio.h>

void reverse(int *first, int *last, int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}

int main(){
    int a[80], n;
    int *p, *q;
    p = a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = a;
    printf("Entered elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    p = a;
    q = &a[n-1];
    reverse(p, q, n);

    printf("Reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }    
}