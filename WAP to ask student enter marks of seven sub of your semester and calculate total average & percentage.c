#include<stdio.h>
#include<conio.h>
void main()
{
    float A,B, C, D, E, F, G, avg, percentage;
    printf("Enter the marks obtained in seven subs:\n");
    scanf("%f%f%f%f%f%f%f",&A,&B,&C,&D,&E,&F,&G);
    avg=(A+B+C+D+E+F+G)/700;
    percentage=avg*100;
    printf("the percentage is %f\n",percentage);
    getch();
}

