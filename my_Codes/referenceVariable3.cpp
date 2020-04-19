#include<iostream> 
using namespace std; 

int main() 
{
int x=10; 
int *ptr = &x; 
int &ref = *ptr; 
cout << ref<<endl; 
ref=20;
cout << ref<<endl; 
} 

