#include<string.h>
class String 
{ 
private: 
	char *s; 
	int size; 
public: 
	String(char *); // constructor 
//	~String();	 // destructor 
}; 
 
String::String(char *c) 
{ 
	size = strlen(c); 
	s = new char[size+1]; 
	strcpy(s,c); 
} 
 /*
String::~String() 
{ 
	delete []s; 
} 
*/

int main()
{
	return 0;
}
