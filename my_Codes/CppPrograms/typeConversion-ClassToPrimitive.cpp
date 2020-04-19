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
		

		void setData(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
	
		void showData()
		{
			cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
		}
		
		/********************************************************************
		 * WE would use "Casting Operator" in this case
		 ************************************************************************/
		operator int()
		{
			return a;
		}
		

	};

int main()
{
	Complex c1;
	c1.setData(3,4);
	c1.showData();
	int x;

	x=c1;
	cout<<"X: "<<x<<endl;
	
	return 0;
}
