#include<stdio.h>
#include<conio.h>
void main()
{
	int a,volume,area;
	printf("enter the edge:\n");
	scanf("%d",&a);
	volume=pow(a,3);
	area=pow(a,2)*6;
	printf("the area is %d\nthe volume is %d",area,volume);
	
	getch();
}
