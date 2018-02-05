// write a program to shift array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,loc,key,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the numbers in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the location\n");
	scanf("%d",&loc);
	printf("enter the key element\n");
	scanf("%d",&key);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=key;
	printf("after shifting of array::\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return(0);
	
}
