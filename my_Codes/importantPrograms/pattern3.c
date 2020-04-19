#include<stdio.h>


int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0; j<=i;j++)
			printf(" ");
		
		for(int k=0; k<7-2*i;k++)
			printf("*");
		
		for(int l=0; l<=i;l++)
			printf(" ");

		printf("\n");
	}



return 0;
}

/*

 ******* 
  *****  
   ***   
    * 

*/

