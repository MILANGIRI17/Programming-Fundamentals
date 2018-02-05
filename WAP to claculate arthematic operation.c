#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, add, mul, sub, div, rem;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    rem=a%b;
    printf("the add is:%d\n",add);
    printf("the div is:%d\n",div);
    printf("the mul is:%d\n",mul);
    printf("the rem is:%d\n",rem);
    printf("the sub is:%d\n",sub);
    getch();
    }
