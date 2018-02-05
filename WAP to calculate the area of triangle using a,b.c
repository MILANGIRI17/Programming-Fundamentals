#include<stdio.h>
#include<conio.h>
void main()
{
    float area, b, h;
    printf("Enter base and height of triangle:\n");
    scanf("%f%f",&b,&h);
    area=(b*h)*0.5;
    printf("the area of triangle is %f",area);

    getch();

}
