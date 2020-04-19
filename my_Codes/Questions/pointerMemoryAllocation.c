# include<stdio.h> 
# include<stdlib.h> 

void fun(int *a) 
{ 
	a = (int*)malloc(sizeof(int)); 
} 

int main() 
{ 
	int *p; 
	fun(p); 
	*p = 6; 
	printf("%d\n",*p); 
	
	getchar(); 
	return(0); 
} 

/*
It does not work. Try replacing “int *p;” with “int *p = NULL;” and it will try to dereference a null pointer.

This is because fun() makes a copy of the pointer, so when malloc() is called, it is setting the copied pointer to the memory location, not p. p is pointing to random memory before and after the call to fun(), and when you dereference it, it will crash.

If you want to add memory to a pointer from a function, you need to pass the address of the pointer (ie. double pointer).

*/

/*

//This will run

void fun(int **a) 
{ 
	*a = (int*)malloc(sizeof(int)); 
} 

int main() 
{ 
	int *p; 
	fun(&p); 
	*p = 6; 
	printf("%d\n",*p); 
	
	return(0); 
} 

*/
