#include<stdio.h>
void sum()
{
	int a,b,sum=0;
	printf("enter two numbers for sum : \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum of %d and %d is :%d",a,b,sum);
}
void main()
{	
	sum();
	printf("\n The above line is a called function\n");
}
