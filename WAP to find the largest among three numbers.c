#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    (a>b&&a>c)?printf("a is largest"):((b>c)?printf("the number is largest"):printf("c is largest"));

    getch();
}

