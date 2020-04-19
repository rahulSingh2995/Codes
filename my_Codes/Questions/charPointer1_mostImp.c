int main() 
{ 
char str[]= "geeks\nforgeeks"; 
char *ptr1, *ptr2; 
	
ptr1 = &str[3]; 
ptr2 = str + 5; 
printf("%c", ++*str - --*ptr1 + *ptr2 + 2); 
printf("%s", str); 

return 0; 
} 


/*

Output:
heejs
forgeeks

Explanation:
Initially ptr1 points to ‘k’ and ptr2 points to ‘\n’ in “geeks\nforgeeks”. In print statement value at str is incremented by 1 and value at ptr1 is decremented by 1. So string becomes “heejs\nforgeeks” .

First print statement becomes
printf(“%c”, ‘h’ – ‘j’ + ‘n’ + 2)

‘h’ – ‘j’ + ‘\n’ + 2 = -2 + ‘\n’ + 2 = ‘\n’

First print statements newline character. and next print statement prints “heejs\nforgeeks”. 

*/
