#include<iostream>
using namespace std;

	class Person
	{
		int x;
		int y;
		
		public:
		void setX(int x)
		{
			this->x=x;
		}
		
		int getX()
		{
			return x;
		}
		
		void setY(int y)
		{
			this->y=y;
		}
		
		int getY()
		{
			return y;
		}

		friend int  add(Person);
	};

	int add(Person p)
	{
		p.x=20;
		return p.x;
	}

int main(void)
{
	Person p1;

	p1.setX(15);
	p1.setY(16);
	
	cout<<"\n"<<"X: "<<p1.getX()<<"\n";
	
//	add(p1);	//only this doesn't modify the values of x of class Person
	p1.setX(add(p1));	//we do this, then only it modifies
	cout<<"\n"<<"X: "<<p1.getX()<<"\n";
	return 0;	
}
