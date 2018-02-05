//just for practice to print a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,j,a[10][10],n;
	printf("enter the value of matrix:\n");
	scanf("%d",&n);
	printf("enter number in array:\n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("the matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
} 
