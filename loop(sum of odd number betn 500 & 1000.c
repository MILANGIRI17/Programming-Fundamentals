/*WAP to print sum of odd numbers betn 500 to 1000 using for,while, do-while*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,i,sum=0;
	printf("1.for loop\n2.while loop\n3.do-while loop\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		for(i=501;i<=999;i+=2)
		{
			sum+=i;
		}
		printf("%d\n ",sum);
		break;
		case 2:
		i=501;
		while(i<=999)
		{
			sum+=i;
			i+=2;
		}
		printf("%d",sum);
		break;
		
		case 3:
			i=501;
		do{
		sum+=i;
		i+=2; 
		}while(i<=999);
		printf("%d",sum);
		
	
		
	}	
	
		
}
