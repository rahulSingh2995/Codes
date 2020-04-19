#include<stdio.h>

   void DToBinaryInArray(int x){
  	static char ch[10];
	int i=0;
	while(x)
	{
		ch[i]=x%2;
		i++;
		x=x/2;
	}

	int j=0;
	for(j=--i;j>=0;j--)
		printf("%d",ch[j]);
   }

	void DToBinaryInSingleInt(int x)
	{
		long int bin=0;
		int rem;
		int mul=1;
		while(x)
		{
			rem=x%2;
			bin=bin+mul*rem;
			mul=mul*10;
			x=x/2;
		}
		printf("\n%d",bin);
	}
	
	

int main()
{
	int x=7;
   	DToBinaryInArray(x);
	DToBinaryInSingleInt(x);
return 0;
}
