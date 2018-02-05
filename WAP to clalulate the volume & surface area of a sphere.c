#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    float volume,surfacearea,r,pi=3.14;
    printf("enter the radius of the sphere:\n");
    scanf("%f",&r);
    volume=(4/3)*pi*pow(r,3);
    surfacearea=4*pi*pow(r,2);
    printf("the volume of the sphere is %f",volume);
    printf("the surface area of sphere is %f",surfacearea);
    getch();

}
