#include<stdio.h>


int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0; j<=i;j++)
			printf("*");

		printf(" ");
		
		for(int k=0; k<3-2*i;k++)
			printf("*");
		
		printf(" ");

		
		for(int j=0; j<=i;j++)
			printf("*");

		printf("\n");
	}



return 0;
}

/*

*****
 ****
  ***
   **
    *

*/

