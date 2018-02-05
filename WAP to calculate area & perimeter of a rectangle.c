#include<stdio.h>
#include<conio.h>
void main()
{
    float area, circumference, l, b;
    printf("enter the length & breath of rectangle:\n");
    scanf("%f%f",&l,&b);
    area=l*b;
    circumference=2*(l+b);
    printf("the area of rectangle is %f",area);
    printf("the circumference is %f",circumference);
    getch();
}
