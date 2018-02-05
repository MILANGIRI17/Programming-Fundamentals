#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=1;		// or we can take count; 
	printf("enter the number:");
	scanf("%d",&num);
	while(num>=10)				// in this step (num>=0)
	{
		num=num/10;
		count++;
	}
	printf("the count of any digit is %d",count);
}
