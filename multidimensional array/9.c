#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,temp,a[100];
	printf("enter size of array:\n");
	scanf("%d",&n);
	printf("enter number in array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)		//this is for total comparision
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	printf("after sorting:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
