#include<stdio.h>
int main(void) 
{ 
int a = 6; 
int b = 0; 
b = a++ + a + --a + a++ + a++; 
printf("%d %d",a,b); 
return 0; 
} 

