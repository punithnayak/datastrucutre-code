#include<stdio.h>
#include<string.h>

int towerOfHanoi(int n, char *source, char *destination, char *aux){
    int count = 1;
    if (n==1)
    {
        printf("Move disk %d from %s to %s\n", n, source, destination);
        return count;
    }
    else{
        count += towerOfHanoi(n-1, source, aux, destination);
        printf("Move disk %d from %s to %s\n", n, source, destination);
        count += towerOfHanoi(n-1, aux, destination, source);
    }
    return count;
}

int main()
{
    int n, steps;
    char a[80] = "Source";
    char b[80] = "Destination";
    char c[80] = "Auxilary";
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    steps = towerOfHanoi(n, a, b, c);
    printf("Total number of steps taken : %d\n", steps);
    return 0;
}