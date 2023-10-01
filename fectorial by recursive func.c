#include <stdio.h>
int display(int x)
{
	if(x==1 || x==0)
	return 1;
	else
	return x*display(x-1);
}
int main()
{
	int n,f;
	printf("enter any number for fectorial\n");
	scanf("%d",&n);
	f=display(n);
	printf("the fectorial is :%d\n",f);
	return 0;
}
