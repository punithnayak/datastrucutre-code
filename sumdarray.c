#include<stdio.h>

double Add(double array[],int n){
	double sum=0;
	for (int i = 0; i < n; ++i)
		{
			sum=sum+array[i];
		}

		return sum;
}
int main(){
	double doubleArray[100];
	int n;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf",&doubleArray[i]);
	}

	double finalSum = Add(doubleArray,n);
	printf("The sum of the array is the %f",finalSum);

return 0;
}