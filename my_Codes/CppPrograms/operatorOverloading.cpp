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

		//Pre-Increment 
		Person operator++()
		{
			Person temp;
			temp.x=++x;
			temp.y=++y;
			return temp;
		}
		
		//Post-Increment 
		Person operator++(int)	//We use a int in function argument to differentiate between pre and post increment
		{
			Person temp;
			temp.x=x++;
			temp.y=y++;
			return temp;
		}

	};


int main(void)
{
	Person p1;

	p1.setX(10);
	p1.setY(15);
	
	cout<<"\n"<<"X: "<<p1.getX()<<"\n";
	p1++;
	++p1;
	cout<<"\n"<<"X: "<<p1.getX()<<"\n";
	return 0;	
}
