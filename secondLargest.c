#include <stdio.h>

int secondLargest(int Array[],int n){
	int max=-1000;
	for (int i = 0; i < n; ++i)
	{
		if(Array[i]>max){
			max=Array[i];

		}
	}
	int max2=-1000;
	for (int i = 0; i < n; ++i)
	{
		if(Array[i]>max2 && Array[i]<max){
			max2=Array[i];

		}
	}

	return max2;

}

int main(){
	int n;
	printf("Enter the Sixe of the Array\n");
	scanf("%d",&n);
	int  Array[100];
	printf("Enter the elements of the Array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&Array[i]);
	}

	int FinalAns=secondLargest(Array,n);
	printf("The Second larhest Is %d",FinalAns);
	return 0;
}