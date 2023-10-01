#include <stdio.h>
int main()
{
	int a[100],i,size,max,Max,Min,min;
	
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter array elememts\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
//		printf("%d\n",a[i]);
	}
	printf("The max value is :%d\n",max);
		min=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
//		printf("%d\n",a[i]);
	}
	printf("The min value is :%d\n",min);
	return 0;
}
