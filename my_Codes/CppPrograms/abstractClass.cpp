#include<iostream>
using namespace std;

	class A
	{
		public:
		virtual void func()=0;
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
	A &p=b1;
	p.func();
}
