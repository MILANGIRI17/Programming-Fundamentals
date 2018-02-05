#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10][10],T;
	printf("Enter number for matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("You have entered:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Troposing the matrix:\n");
	for(j=0;j<2;j++)
	{
		for(i=0;i<2;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
