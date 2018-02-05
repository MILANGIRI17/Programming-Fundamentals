#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year you want to check:\n");
    scanf("%d",&year);
    (year%4==0&&year%100!=0)?printf("the year is leap year"):((year%400==0)?printf("the year is leap year"):printf("the year is not leap year"));
    getch();
}
