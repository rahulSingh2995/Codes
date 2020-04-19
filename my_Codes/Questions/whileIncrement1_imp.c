int main() 
{ 
	int i=0; 
	while ( +(+i--) != 0) 
		i-=i++; 
	printf("%d",i); 
	return 0; 
} 


/*

Output:
-1

Explanation:
Let us first take the condition of while loop. There are several operator there. Unary + operator doesn’t do anything. So the simplified condition becomes (i–) != 0. So i will be compared with 0 and then decremented no matter whether condition is true or false. Since i is initialized to 0, the condition of while will be false at the first iteration itself but i will be decremented to -1. The body of while loop will not be executed. And printf will print -1.

So it wasn’t that scary as it seemed to be!

*/
