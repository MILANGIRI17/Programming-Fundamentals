  #include<stdio.h>
#include<stdio.h>
void main()
{
	int choice,i;
	printf("1.for loop(for upper alphabet)\n2.forloop(for lowercase alphabet)\n3.while loop(for uppercase)\n4.while loop(for lowercase)\n5.do-while loop(for uppercase)\n6.do-whileloop(for lowercase)\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
	
	case 1:
		for(i=65;i<=90;i++)
		{printf("%c\n",i);
		}
		break;
		case 2:
		for(i=92;i<=122;i++)
		{printf("%c\n",i);
		}
		break;
	case 3:
		i=65;
		while(i<=90)
		{printf("%c\n",i);
		i++;
		}
		break;
	case 4:
		i=92;
		while(i<=122)
		{printf("%c\n",i);
		i++;
		}
		break;
	case 5:
		i=65;
		do{printf("%c\n",i);
		i++;
		}while(i<=90);
		break;
	case 6:
		i=92;
		do{printf("%c\n",i);
		i++;
		}while(i<=122);
		break;  
	}
}
