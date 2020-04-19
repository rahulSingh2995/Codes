/* 

//Prog-1

#include<stdio.h> 
#define d 100
int main() 
{ 
	static int i = d; 
	printf(" value of i = %d", i); 
	return 0; 
} 

*/


/*

//Prog-2

#include<stdio.h> 
int main() 
{ 
int x = 10; 
static int y = x; 

if(x == y) 
	printf("Equal"); 
else if(x > y) 
	printf("Greater"); 
else
	printf("Less"); 

getchar(); 
return 0; 
} 

*/

#include<stdio.h> 
int main() 
{ 
int x = 10; 
static int y;
y=10; 

if(x == y) 
	printf("Equal"); 
else if(x > y) 
	printf("Greater"); 
else
	printf("Less"); 

getchar(); 
return 0; 
} 

