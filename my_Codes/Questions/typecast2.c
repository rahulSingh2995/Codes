#include<stdio.h> 
int main() 
{ 
int a; 
char *x; 
x = (char *) &a; 
a = 512; 
printf("a=%d\n",a); 
printf("%d\n",x[0]); 
printf("%d\n",x[1]); 
printf("%d\n",x[2]); 
printf("%d\n",x[3]); 

x[0] = 1; 
x[1] = 2; 

printf("a=%d\n",a); 

printf("%d\n",x[0]); 
printf("%d\n",x[1]); 
printf("%d\n",x[2]); 
printf("%d\n",x[3]); 

return 0; 
} 

