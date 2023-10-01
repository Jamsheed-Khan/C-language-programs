#include<stdio.h>
int main()
{
	int i,n,rev;
	printf("Enter any three digit number:\n");
	scanf("%d",&n);
	printf("the reverse of digits is : "); 
	for(i=1;n>0;n=n/10)
{
		rev=n%10;
	printf("%d",rev);
}
	return 0;
}
