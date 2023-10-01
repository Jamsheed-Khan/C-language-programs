#include <stdio.h>
int swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
  return a; 	
//	printf("after swap x = %d and y = %d\n",x,y);
	
}
int main()
{
	int x=35,y=65,z;
	printf("before swap the value of x = %d and y= %d\n",x,y);
	z=swap(x,y);
	printf("after swap the value of x =%d and y=%d\n",z);
	return 0;
}
