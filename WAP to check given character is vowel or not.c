#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?printf("the character is vowel"):printf("the character is not vowel");

    getch();
}


