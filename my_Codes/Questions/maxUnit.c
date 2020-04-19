#include<stdio.h> 
int main() 
{ 
unsigned int x = -1; 
int y = ~0; 
if(x == y) 
	printf("same"); 
else
	printf("not same"); 
printf("\n x is %u, y is %u", x, y); 
getchar(); 
return 0; 
} 

/*

Output: “same x is MAXUINT, y is MAXUINT” Where MAXUINT is the maximum possible value for an unsigned integer.
-1 and ~0 essentially have same bit pattern, hence x and y must be same. In the comparison, y is promoted to unsigned and compared against x. The result is “same”. However, when interpreted as signed and unsigned their numerical values will differ. x is MAXUNIT and y is -1. Since we have %u for y also, the output will be MAXUNIT and MAXUNIT.

*/


