#include <stdio.h>
int main()
{
	int j=1;
	while(j)
	{
		printf("%d\n",j++);
		if(j>5)
		break;
	}
	return 0;
}
