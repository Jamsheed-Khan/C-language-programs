#include <stdio.h>
int main()
{
	int c,n,i,s=0,a;
	
	printf("Enter any number \n");
	scanf("%d",&n);
	c=n;
	for(i=1;n>0;n=n/10)
	{
	a=n%10;
////		digit=n%10;
//s=a+(s*10);
//		count++;
	s=(a*a*a)+s;
	}
	if(c==s)
	printf("palindrome");
	else
	printf("not");
	return 0;
}
