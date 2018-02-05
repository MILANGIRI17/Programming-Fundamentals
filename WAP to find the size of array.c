#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={12,13,13,134,232},size;
	size=sizeof(a)/sizeof(int);	//this is predefined function to find the size of array
	printf("the size of array is %d",size);	/*IF we take a[45] then size of array=sizeof(a)/sizeof(int)	instead of int we can use char, string accordingly to data type*/
}
