#include<stdio.h>
#include<stdlib.h>

void product(int **a,int **b,int **r,int r1,int c1,int c2)
{
 for(int i=0;i<r1;i++){
  
  	for(int j=0;j<c2;j++){
  	   r[i][j]=0;
  		for(int k=0;k<c1;k++){
  		
          r[i][j]+=a[i][k]*b[k][j];
  		}
  	}
 }
 printf("New matrix is \n");
 for(int i=0;i<r1;i++)
  {
  	for(int j=0;j<c2;j++)
  	{
  		printf("\t %d",r[i][j]);
  	}
  	printf("\n");
  }
}

int **allocate(int r1, int c1)
{
int i;
int **matrix;
matrix=(int **)calloc(r1, sizeof(int *));
for(i=0;i<c1;i++)
*(matrix+i)=(int *)calloc(c1,sizeof(int));
return matrix;
}


int read(int **matrix, int r1, int c1)
{

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",(*(matrix+i)+j));
		}
	}
}

int print(int **matrix, int r1, int c1)
{

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d",*(*(matrix+i)+j));
		}
		printf("\n");
	}
}

int main()
{
int r1,c1,r2,c2;
int **A,**B,**R;
        printf("Enter dimensions of Matrix 1:\n");
	scanf("%d %d",&r1, &c1);
	A=allocate(r1,c1);
	printf("Enter dimensions of Matrix 2:\n");
	scanf("%d %d",&r2, &c2);
	B=allocate(r2,c2);
	if(c1==r2)
	{
	printf("Enter the elements of Matrix 1:\n");
	read(A,r1,c1);
	printf("The matrix is:");
	print(A,r1,c1);
	printf("Enter the elements of Matrix 2:\n");
	read(B,r1,c1);
	printf("The matrix is:");
	print(B,r2,c2);
	R=allocate(r2,c2);
	product(A,B,R,r1,c1,c2);
	}
	else
	printf("Wrong dimensions");	
}
