#include<iostream> 
using namespace std; 

int &fun() 
{ 
	
	static int x = 10; 
	cout<<x<<"\n";
	cout<<"Function Call\n";
	cout<<x<<"\n";
	x=20;
	cout<<x<<"\n";
	return x; 
} 
int main() 
{ 
	fun() = 30; 
	cout << fun(); 
	return 0; 
} 

