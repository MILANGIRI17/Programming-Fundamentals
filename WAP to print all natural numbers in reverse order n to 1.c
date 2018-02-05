#include<stdio.h>
#include<conio.h>
void main()
{
	int choice, n, i;
	printf("1.using for loop\n2.using while loop\n3.using do while loop\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("enter the number:\n");
				scanf("%d",&n);
				
				for(i=n;i>=1;i--)
				{
					printf("%d\n",i);
				}
	
			break;
		case 2:
				printf("enter the number:\n");
				scanf("%d",&n);
				i=n;
				while(i>=1)
				{
					printf("%d\n",i);
					i--;
				}
				break;
		case 3:
				printf("enter the number :\n");
				scanf("%d",&n);
				i=n;
				do
				{
					printf("%d\n",i);
					i--; 
				}while(i>=1);
			
			
	

	}	

}
