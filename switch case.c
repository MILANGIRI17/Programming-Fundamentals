/*write a menu based program as:
i)to check if a number is odd or even
ii)to  check if a number is positive or negative
iii)to check whether a character is vowel or not1
iv)to check whether a character is alphabet or not
v)to check whether a number is  divisible by 5 or 13 or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, choice;
    char ch;
    printf("1.odd/even\n2.positive/negative\n3.vowel\n4.alphabet\n5.divisible by 5 or 13 or not\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("enter the number:\n");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("the number is even");
        }
        else
        {
            printf("the number is odd");
        }
        break;
    case 2:
         printf("enter the number:\n");
        scanf("%d",&a);
        if(a>=0)
        {
            printf("the number is positive");
        }
        else
        {
            printf("the number is negative");
        }
        break;

    case 3:
        printf("enter the character:\n");
        scanf("%s",&ch);					//or we can use <space>%c
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("the character is vowel");
        }
        else
        {
            printf("the character is consonant");
        }
        break;

        case 4:
        printf("enter the character:\n");
        scanf("%s",&ch);
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        {
            printf("the character is alphabet");
        }
        else
        {
            printf("the character is not alphabet");
        }
        break;
    case 5:
         printf("enter the number:\n");
        scanf("%d",&a);
        if(a%5==0||a%13==0)
        {
            printf("the number is divisible");
        }
        else
        {
            printf("the number is not divisible");
        }
        break;

    case 6:
        printf("not possible");
    }
    return(0);

}

