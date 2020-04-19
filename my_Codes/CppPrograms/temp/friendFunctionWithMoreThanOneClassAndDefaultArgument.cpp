#include<iostream>
using namespace std;
	class Student;
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

		friend int add(Person,Student);
	};

	class Student
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

		friend int add(Person,Student);
	};

	int add(Person p,Student s)
	{
		cout<<"In Friend Function\n";
		int x=p.x+s.x;
		return x;
	}

int main(void)
{
	Person p1;
	Student s1;
	p1.setX(15);
	s1.setX(20);
	
	cout<<"\n"<<"Person-X: "<<p1.getX()<<"\n";
	cout<<"\n"<<"Student-X: "<<s1.getX()<<"\n";
	
//	add(p1,s1);	//only this doesn't modify the values of x of class Person
	int x=add(p1,s1);	
	cout<<"\n"<<"Result-X: "<<x<<"\n";
	return 0;	
}
