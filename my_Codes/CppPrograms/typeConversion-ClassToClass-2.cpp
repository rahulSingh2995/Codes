#include<iostream>
using namespace std;

	class Product
	{
	public:
		int a,b;
		Product()
		{
			cout<<"In Default Constructor of Product Class\n";
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

	class Item
	{
		int a,b;
	public:
		Item()
		{
			cout<<"In Default Constructor of Item Class\n";
		}
		
		Item(Product p)
		{
			cout<<"In Constructor With One Product Argument of Item Class\n";
			a=p.a;
			b=p.b;
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
	Item i1;
	i1.setData(3,4);
	i1.showData();
	
	Product p1;
	p1.setData(5,10);
	p1.showData();
	
	i1=p1;		//obj of one class converted to another class
	i1.showData();
	return 0;
}
