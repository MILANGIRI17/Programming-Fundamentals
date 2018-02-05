#include<stdio.h>
#include<conio.h>
void main()
{
    float x1, x2, a, b, c;
    printf("Enter a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("the value of x1&x2 is:%f\n%f",x1,x2);
    getch();
}
