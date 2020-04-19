#include<stdio.h>

long int factorial(int); 

void main()
{
	int num=5;
	long int fact=factorial(num);
	printf("Factorial of %d is %ld\n",num,fact);
}

long int factorial(int num) 
{
	long int fact=1;
	while(num)
	{
		fact=fact*num;
		num--;
	}
	
	return fact;
} 
