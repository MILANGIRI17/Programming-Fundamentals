//wap to print the diterminant of 2*2 matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10][10],determinant;
	printf("Enter numbers for matrix:\n");
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
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			determinant=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		}
	}
	printf("%d",determinant);
	
	
}
