// A class can have a static member of self type 
#include<iostream> 

using namespace std; 

class Test { 
static Test self;
	int b;

 // works fine 

/* other stuff in class*/

}; 

int main() 
{ 
Test t; 
cout<<"SizeOf:"<<sizeof(t);
return 0; 
} 

