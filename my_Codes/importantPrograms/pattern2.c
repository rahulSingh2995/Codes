#include<stdio.h>


int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0; j<5-i;j++)
			printf("*");
		
		for(int k=0; k<2*i;k++)
			printf(" ");
		
		for(int l=0; l<5-i;l++)
			printf("*");

		printf("\n");
	}



return 0;
}

/*

**********
****  ****
***    ***
**      **
*        *

*/

