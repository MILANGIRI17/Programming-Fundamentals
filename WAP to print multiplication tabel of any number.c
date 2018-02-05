#include<stdio.h>
#include<conio.h>
void main()
{
	int n,mul,i;
	printf("enter a number for multiplication table: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
	}
	getch();
}
