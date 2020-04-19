#include<stdio.h>

void fun(int (*a)[3])
{
	printf("Add Of A in fun: %u\n",a);
	printf("Add Of A+1 in fun: %u\n",a+1);

}


int main()
{
	int arr[]={10,20,30};
	printf("SizeOf *Arr: %ld\n",sizeof(*arr));
	
	int (*p)[3]=&arr;
	fun(p);

return 0;
}
