/* wap to count the total no of even & odd elements of an array.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n[]={1,2,3,4,5,6,7,8,9};
	int count2=0,count1=0,i;
	for(i=0;i<9;i++)
	{
		if(n[i]%2==0)
		{
		count2++;
		}
		else
		{
			count1++;
		}
	
	}
	printf("the even numbers are:%d\n",count2);
	printf("the odd numbers are: %d\n",count1);
	
}
