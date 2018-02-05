#include<stdio.h>
#include<conio.h>
void main()
{
    /*using for loop*/
    int i=0, n,choice;
    printf("1.for\n2.while\n3.do-while\n");
    scanf("%d",&choice);
    printf("enter n:\n");
    scanf("%d",&n);
	switch(choice)
	case 1:
	{
    for(i=1; i<=n; i++)
    {
      printf("%d\n",i);
    }
    break;

    /*using while loop */
    case 2:
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    break; 

    /*using do while*/
    case 3:
    i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    break;
	}
	getch();

}
