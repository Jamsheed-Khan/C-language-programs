#include <stdio.h>
void swap(int ,int);
int main()
{
	int a=35,b=65;
	swap(a,b);
	return 0;
}
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("the swap of numbers is a = %d and b = %d",a,b);
}
