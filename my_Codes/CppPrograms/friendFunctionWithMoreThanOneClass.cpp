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

		friend void add(Person *,Student *);
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

		friend void add(Person *,Student *);
	};

	void add(Person *p,Student *s)
	{
		int temp=p->x;		//This temp variable was necessary here because p->x will be updated in next line and for thid line it
					//would produce unintentional result
		p->x=p->x+s->x;
		s->x=s->x-temp;
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
	add(&p1,&s1);	
	cout<<"\n"<<"Person-X: "<<p1.getX()<<"\n";
	cout<<"\n"<<"Student-X: "<<s1.getX()<<"\n";
	return 0;	
}
