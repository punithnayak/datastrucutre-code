#include<stdio.h>

typedef struct
{
    int real;
    int imag;
}complex;

void read(complex *c){
    printf("Enter the complex number: ");
    scanf("%d+%di", &c->real, &c->imag);
}

void display(complex *c){
    printf("Entered complex number is: %d+%di", c->real, c->imag);
}

void add(complex *c1, complex *c2, complex *c){
    c->real = c1->real + c2->real;
    c->imag = c1->imag + c2->imag;
}

void subtract(complex *c1, complex *c2, complex *c){
    c->real = c1->real - c2->real;
    c->imag = c1->imag - c2->imag;
}

void multiply(complex *c1, complex *c2, complex *c){
    c->real = (c1->real*c2->real)-(c1->imag*c2->imag);
    c->imag = (c1->real*c2->imag)+(c2->imag*c2->real);
}

int main(int argc, char const *argv[])
{
    complex x,y,sum,diff,prod;
    read(&x);
    read(&y);
    printf("Entered complex numbers are: \n");
    display(&x);
    display(&y);
    add(&x,&y,&sum);
    printf("Sum = ");
    display(&sum);
    subtract(&x,&y,&diff);
    printf("\nDifference = ");
    display(&diff);
    multiply(&x,&y,&prod);
    printf("\nProduct = ");
    display(&prod);
    return 0;
}
