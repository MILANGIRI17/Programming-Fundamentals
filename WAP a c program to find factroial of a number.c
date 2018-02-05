#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, fact=1;
	printf("enter the number of which you want the factorial:\n");
	scanf("%d",&n);
	if(n>0)
	{
	
		for(i=1;i<=n;i++)
		{
			fact=fact*i;	
		}
		printf("%d",fact);
	}
	else
	{
		printf("cannot find the factorial");
	}
}
