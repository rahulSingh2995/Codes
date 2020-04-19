#include<stdio.h>
#include<stdlib.h>
int rahul();



	void _start()
	{
		rahul();		
		exit(0);
	}

	int rahul()
	{
		printf("In Rahul\n");
		return 0;
	}


/*

Compilation using command :
gcc filename.c -nostartfiles
(nostartfiles option tells the compiler to avoid standard linking)

*/
