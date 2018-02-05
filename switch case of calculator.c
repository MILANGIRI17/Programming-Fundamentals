#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b, add, subtraction, multiply, divide, reminder, choice;
     char ch;
    printf("1.add\n2.subtraction\n3.multiply\n4.division\n5.reminder\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
    case 1:
    	add=a+b;
        printf("the result=%d\n",add);
        break;
    case 2:
    	subtraction=a-b;
        printf("the result=%d\n",subtraction);
        break;

    case 3:
    	multiply=a*b;
       	printf("the result=%d\n",multiply);
        break;

        case 4:
        divide=a/b;
    	printf("the result=%d\n",divide);
        break;
    case 5:
    	reminder=a%b;
    	printf("the result=%d\n",reminder);
        break;

    case 6:
        printf("not possible");
    }
    getch();

}
