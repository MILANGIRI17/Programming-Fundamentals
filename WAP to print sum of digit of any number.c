#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>=0)
	{

		sum=sum+n%10;
		n=n/10;
	}
	printf("the sum of the digit is %d",sum);

	
}
