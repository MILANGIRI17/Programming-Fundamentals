#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,i,num[5];
	printf("enter the  numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("the sum of the elements is:%d",sum);
	getch();
}
