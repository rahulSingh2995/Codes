
int main() 
{ 
	int i=10; 
	void pascal f(int,int,int); 
	f(i++, i++, i++); 
	printf(" %d",i); 
	return 0; 
} 
void pascal f(integer :i,integer:j,integer :k) 
{ 
write(i,j,k); 
} 


/*

Output:
Program will give compile-time error

Explanation:
Compiler specific question. Not all compilers support this.

Otherwise, pascal enforces left to right processing of arguments. So even though, the argument processing order can be changed by the use of pascal, we can’t use Pascal language routines such as write inside C program.

*/

