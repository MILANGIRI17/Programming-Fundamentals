#include<stdio.h>
#include<conio.h>
void main()
{
    int ASCII;
    char ch;
    printf("enter the character:");
    scanf("%c",&ASCII);
    
    (ASCII>=65&&ASCII<=90||ASCII>=97&&ASCII<=122)?printf("the character is alphabet"):printf("the character is not alphabet");

    getch();
}


