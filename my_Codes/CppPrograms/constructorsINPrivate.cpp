#include<iostream>
#include<string.h>
using namespace std;

	class Person
	{
		int age;
		char name;
		int height;
		
		Person(){
			cout<<"In Constructor\n";
		}
		Person(int age,char name,int height)
		{
			this->age=age;
			this->name=name;
			this->height=height;
		}		

		public:
		void setAge(int age)
		{
			this->age=age;
		}

		int getAge()
		{
			return age;
		}
	};

	int main(void)
	{
		Person p1(23,'R',175),p2;
		cout<<"Age"<<p1.getAge();
		


	}
