#include<stdio.h>
#include<stdio.h>
void main()
{
    float  area, circumference, l;

    printf("enter the length of the circle:\n");
    scanf("%f",&l);
    area=pow(l,2);
    circumference=4*l;
    printf("the area of square is %f",area);
    printf("the circumference of square is %f",circumference);
    getch();
}
