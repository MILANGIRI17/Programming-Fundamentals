#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter the no. that you want check:\n");
    scanf("%d",&a);
    if(a%5==0&&a%11==0)
    {
        printf("the number is divisible");
    }
    else
    {
        printf("the number is not divisible");
    }
    getch();

}
