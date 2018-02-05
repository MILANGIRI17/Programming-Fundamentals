#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("enter the elements of the arrary:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the numbers you have entered in reverse is:\n");
	for(i=4;i>=0;i--)
	{
	printf("%d\n",a[i]);
	}
}
