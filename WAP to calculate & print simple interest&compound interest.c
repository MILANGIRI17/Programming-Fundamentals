#include<stdio.h>
#include<conio.h>
void main()
{
    float SI, P, T, R, n, A, CI;
    printf("Enter principal, time, rate,no. of times interest is calculated :\n");
    scanf("%f%f%f%f",&P,&T,&R,&n);
    SI=(P*T*R)/100;
    A=pow((1+(R/n)),n*T)*P;
    CI=A-P;
    printf("the simple interest is%f and compound interest is %f",SI,CI);
    getch();
}
