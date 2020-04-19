#include<stdio.h>

void display(int,int);
void swapSimple(int,int);
void swapWOtempVar(int,int);
void swapWithExOr(int,int);
void swapWithPointerWOtempVar(int *,int *);

int main(void)
{
	int a=10,b=20;
	display(a,b);
	
	swapSimple(a,b);

	swapWOtempVar(a,b);
	
	swapWithExOr(a,b);

	swapWithPointerWOtempVar(&a,&b);
	display(a,b);

return 0;
}

void swapWithPointerWOtempVar(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
void swapWithExOr(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;

	display(a,b);
}


void swapWOtempVar(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
		
	display(a,b);
}

void swapSimple(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	display(a,b);
}


void display(int a,int b)
{
	printf("A: %d\tB: %d\n",a,b);
}
