 /*wap to print of following matrices;
1)2*2
2)3*3
3)5*4
4)3*5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10][10],m,n;
	printf("enter the row:\n");
	scanf("%d",&m);
	printf("enter the column:\n");
	scanf("%d",&n);
	printf("enter numbers in matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	printf("the matrix you have entered is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	} 
	getch();
}
