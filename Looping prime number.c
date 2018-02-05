//WAP to find prime or not

#include <stdio.h>
#include <conio.h>

void main()
{
	int i, num;
	printf("Enter number");
	scanf("%d", &num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("This is not prime number");
			break;
		}
}
		if(i==num)
		{
			printf("This a prime number");
		}

	
	getch();
	
}
