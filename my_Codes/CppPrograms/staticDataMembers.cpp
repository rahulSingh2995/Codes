//Program to show that static data members are shared between all the objects
#include<iostream>
#include<string.h>
using namespace std;

	class Person
	{
		int age;
		char name[15];
		int height;
		public:

		static int same;
		void setAge(int age)
		{
			this->age=age;
		}

		int getAge()
		{
			return age;
		}

	};


	int Person::same=15;

	int main(void)
	{
		Person p1,p2,p3;
		p1.setAge(25);
		int age=p1.getAge();
		cout<<"Age: "<<age<<"\n";
		cout<<"Value by Obj1-p1: "<<++(p1.same)<<"\n:x";
		cout<<"Value by Obj12-p2: "<<++(p2.same)<<"\n:x";
		cout<<"Value by Obj3-p3: "<<++(p3.same)<<"\n:x";
		cout<<"Value by Obj1-p1: "<<++(p1.same)<<"\n:x";
	}
