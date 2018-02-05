#include<stdio.h> /*for this we can divide the num by 10 for the last digit & for any first digit continue upto when there remains one digit*/
#include<conio.h>
void main()
{
	int i,num;
	printf("enter a number of which you want to print first and last digit:");
	scanf("%d",&num);
	i=num%10;
	printf("the last digit of the num is: %d\n",i);
	while(num>=10)
	{
		num=num/10;
	}
	printf("the first digit is: %d",num);
	
	getch();
}
