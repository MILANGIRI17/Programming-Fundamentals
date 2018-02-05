#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, temp;
    printf("enter first and second number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the first no. is:%d and second no. is:%d",a,b);
    getch();
}
