#include<iostream>
using namespace std;

void disp(void)
{
	cout<<"In Display with void";
}

int disp(void)
{	
cout<<"In Display with int";
}

int main()
{
disp();
return 0;
}
