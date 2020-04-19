#include <stdio.h> 
void fun(const char **p) { 
printf("Print: %s",*p);
} 
int main(int argc, char **argv) 
{ 
fun(argv); 
getchar(); 
return 0; 
} 

