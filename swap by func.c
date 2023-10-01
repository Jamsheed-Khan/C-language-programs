#include <stdio.h>
void swap(int x, int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("after swap x = %d and y = %d\n",x,y);
	
}
int main()
{
	int x=35,y=65;
	printf("before swap the value of x = %d and y= %d\n",x,y);
	swap(x,y);
	return 0;
}
