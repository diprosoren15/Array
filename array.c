#include<stdio.h>
int main()
{
	int ar[3][3];
	int i=0,j=0;
	int sum=0;
	
	printf("Enter the values in the 3x3 array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&ar[i][j]);
			
		}
	
	}
	printf("The matrix is:\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum=sum+ar[i][j];
		}
			
	}
	printf("Sum of the diagonals=%d",sum);
}

