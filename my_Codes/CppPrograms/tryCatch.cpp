#include<iostream>
using namespace std;


int main()
{
	int x;
	try
	{
		Please Input any Positive Number
		cin>>x;
		if(x==1)
			throw 1;
	
	}

	catch(int a)
	{
		cout<<"In Exception";
	}


	return 0;
}
