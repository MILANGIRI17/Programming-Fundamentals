#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("enter first and second number:\n");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("the first no. is:%d\n and second no. is:%d",a,b);
    getch();
}

