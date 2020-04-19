#include<iostream>
using namespace std;

	class Complex
	{
		int a,b;
	public:
		Complex()
		{
			cout<<"In Default Constructor\n";
		}
		
		Complex(int a)
		{
			cout<<"In Default Constructor With One Int Argument\n";
			this->a=a;
			b=0;
		}

		void setData(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
	
		void showData()
		{
			cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
		}
	};

int main()
{
	Complex c1;
	int x=5;
	c1=x;
	c1.showData();
	return 0;
}
