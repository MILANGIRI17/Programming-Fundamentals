//wap to search element in array.   (searching..)
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[]={1,2,3,4,5,6,7,8,9,0,11,112,23,34,44},n,count=0;
	printf("Enter a number what you want to search:\n");
	scanf("%d",&n);
	for(i=0;i<15;i++)
	{
		if(a[i]==n)
		{
			printf("The number you have entered is found in array\n");
			count+=1;
		}
	}
	if(count!=1)
	{
		printf("The number you have entered is not found in array\n");
	}
		
	getch();
}
