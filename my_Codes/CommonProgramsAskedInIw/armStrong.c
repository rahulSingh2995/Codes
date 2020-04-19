#include<stdio.h>
#include<math.h>

int isArmStrong(int);
int main(void)
{
	int num=1234;
	printf("Please Enter a Number: ");
	scanf("%d",&num);
	int ret=isArmStrong(num);
	
	printf("\n");
	if(ret==0)
		printf("it's a Armstrong Number !\n");
	else 
		printf("Not a Armstrong Number !\n");


return 0;
}


	int isArmStrong(int num)
	{
		int n[10];
		int i=0,count;
		int sum=0;
		int tempnum=num;
		while(num)
		{
			n[i]=num%10;
			i++;
			num /= 10;
		}
		count =i;
		for(count=0;count<i;count++)
			sum += pow(n[count],i);
		
		if(sum==tempnum)
			return 0;
		else return 1;
	
	}
