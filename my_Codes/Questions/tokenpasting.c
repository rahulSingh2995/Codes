#include<stdio.h> 
#define f(g,g2) g##g2 
int main() 
{ 
int var12 = 100; 

printf("%d", f(var,12)); 
 
return 0; 
} 


/*

Output: 100
The operator ## is called “Token-Pasting” or “Merge” Operator. It merges two tokens into one token. So, after preprocessing, the main function becomes as follows, and prints 100.

*/

