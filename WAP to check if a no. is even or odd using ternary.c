#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    (a%2==0)?printf("The number is even"):printf("the number is odd");

    getch();
}
