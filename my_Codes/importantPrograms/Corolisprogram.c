#include<stdio.h>

int smallestNumber(int arr[])
{
	int size=9;
	int small=arr[0];
	while(size)
	{
		if(small>arr[size])
			small=arr[size];

	size--;	
	}
	return small;
}

void func(int arr[])
{
	int small=smallestNumber(arr);
	printf("Smallest=%d\n",small);
	
	int size=0;
	while(size<10)
	{
		if(arr[size]%2==0)
		{	
			size++;
			if(arr[size]%2==0)
			arr[size]=small;
		}
	size++;
	}

}

int main()
{
int arr[10];

	printf("Input 10 Numbers\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		printf("\b\r%d more to input\n",9-i);
	}
	printf("The Number are:\n");
	for(int i=0;i<10;i++)
		printf("Arr[%d]=%d\n",i,arr[i]);

	func(arr);

	printf("The Number are:\n");
	for(int i=0;i<10;i++)
		printf("Arr[%d]=%d\n",i,arr[i]);

return 0;
}
