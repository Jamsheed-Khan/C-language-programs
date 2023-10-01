#include<stdio.h>
int fect(int n)
{
	int i,fect=1;
	for(i=1;i<=n;i++)
	{
		fect*=i;
		
	}
	return fect;
//	printf("%d\n",fect);
}
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=fect(i);
	printf("the fectorial of %d is %d\n",i,a);
	}
	return 0;
}
