#include<stdio.h>
int rev(int num);
int main()
{
	int r;
	int num=7;
	r=rev(num);
 printf("%d",r );
	return 0;
}
int rev(int num)
{
	int fun=0;
	int i=num;
while(i%num!=0)
	{
		fun=fun+i;
		i=i-1;
	}
	return fun;

}
