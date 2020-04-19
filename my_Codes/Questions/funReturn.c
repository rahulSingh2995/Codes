
char *getString() 
{ 
char *str = "Nice test for strings"; 
//char str[] = "Nice test for strings"; // returning this we return null as str[] will be stored on stack
					// and stack is cleared when the function is over
return str; 
} 

int main() 
{ 
printf("%s", getString()); 
getchar(); 
return 0; 
} 

