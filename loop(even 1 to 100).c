 /*WAP to print all even numbers from 1 t 100 using for,while, do-while*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,i=0;
	printf("1.for loop\n2.while loop\n3.do-while loop\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)	
{
	case 1:
		for(i=2;i<=100;i+=2)
		{
			printf("%d\n",i);
		}
		break;
	case 2:
		while(i<=100)
		{
			printf("%d\n",i);
			i+=2;
		}
		break;
	case 3:
		do
		{
			printf("%d\n",i);
			i+=2;
		}while(i<=100);
		break;
		
}
getch();
	
}
