#include<stdio.h>

 int LinearSearch (int array[],int n,int x){
 	int pos=0;
 	for (int i = 0; i < n; ++i)
 	{
 		if(array[i]==x){
 			pos=pos+1;
 			
 			break;

 		}
 		pos=pos+1;
 		
 	}
 	return pos;
 	

 }
 int main(){
 	int  Array[100];
	int n;
	int x;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&Array[i]);
	}
	
	
	
	printf("Enter the Element to be searched");
	scanf("%d",&x);
    int finalAns= LinearSearch(Array,n,x);

    printf("The ELement is at the position %d",finalAns);
    return 0;
 }