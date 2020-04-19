#include<iostream>
using namespace std;

	class A
	{
		public:
		virtual void func()
		{
			cout<<"In Base Class\n";
		}	
	};

	class B : public A
	{
		public :
		void func()		//Function Overrided here
		{
			cout<<"In Derived Class\n";
		}	
	};

int main(void)
{
	B b1;
	A *a=&b1;
	
	a->func();	// Derived Class func function will run


}
