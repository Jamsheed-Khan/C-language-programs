#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	printf("Enter any digits :\n");
	scanf("%d",&n);
	printf("the sum of the digit is :");
	for(i=0;n>0;n=n/10)
	{
		r=n%10;
		sum=sum+r;
	}
	printf("%d",sum);
	return 0;
}
