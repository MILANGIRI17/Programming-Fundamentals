#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.14,area,r,circumference;
    printf("enter the radius of the circle:\n");
    scanf("%f",&r);
    circumference=2*pi*r;
    area=pi*pow(r,2);
    printf("the area of the circle is %f\n",area);
    printf("the circumference of the circle is %f",circumference);

    getch();
}
