#include<stdio.h>
void fun(int **p) 
{ 
static int q = 10; 
*p = &q; 
}	 

int main() 
{ 
int r = 20; 
int *p = &r; 
fun(&p);				// here it is call by reference 
printf("In Main: %d", *p); 
return 0; 
} 

