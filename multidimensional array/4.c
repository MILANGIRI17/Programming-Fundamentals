#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,a[10][10],b[10][10],i,j,count=0;
	printf("for first matrix::::::\n");
	printf("enter the row:\n");
	scanf("%d",&n);
	printf("enter the column:\n");
	scanf("%d",&m);
	printf("enter the numbers in 1st matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("for second matrix::::::\n");
	printf("enter the numbers in 2nd matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==b[i][j])
			{
				count+=1;
			}
		}
	}
	if(count==m*n)
	{
		printf("the matrices are equal");
	}
	else
	{
		printf("the matrices are not equal");
	}
	
	
}
