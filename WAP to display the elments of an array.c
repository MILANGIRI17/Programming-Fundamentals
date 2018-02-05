#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[4];
	printf("enter the elements:\n");
	for(i=0;i<4;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("you have entered:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	
	getch();
}
