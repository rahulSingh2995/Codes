//Here copy constructor is created implicitly by compiler
#include<iostream>
using namespace std;

	class Example
	{
		int a,b;
		int *p;
	public:
		Example()
		{
			p=new int;
		}

		~Example()
		{
			delete(p);
		}
		void setData(int a, int b, int c)
		{
			this->a=a;
			this->b=b;
			*p=c;
		}
		
		void showData()
		{
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
			cout<<"C: "<<*p<<endl;
		}
	};

int main()
{
	Example e1;
	e1.setData(3,4,5);
	cout<<"E1 Show Data"<<endl;	//3 4 5
	e1.showData();
	Example e2=e1;
	cout<<"E2 Show Data"<<endl;	//3 4 5
	e2.showData();
	e2.setData(13,14,15);		
	cout<<"E2 Show Data"<<endl;	//13 14 15
	e2.showData();			
	cout<<"E1 Show Data"<<endl;	//3 4 15
					//Because of shallow copy we changed the value of a,b and pointer p in object e2
					//and pointer p of object e1 also changed
	e1.showData();
	

	return 0;
}
