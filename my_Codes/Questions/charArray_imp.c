#include<stdio.h> 
int main() 
{ 
char *s[] = { "knowledge","was","power"}; 
char **p; 
p = s; 
printf("%s ", ++*p); 
printf("%s ", *p++); 
printf("%s ", ++*p); 

return 0; 
} 

