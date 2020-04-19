#include<iostream>
#include<string.h>
using namespace std;

	class Person
	{
		int age;
		char name[15];
		int height;
		
		public:

		void setAge(int age)
		{
			this->age=age;
		}

		int getAge()
		{
			return age;
		}
	/************************************************************************************
	 * These Two Functions will be defined outside the class using scope resolution 
	 ***********************************************************************************/
		void setName(char *name);
		char *getName();

	/*************************************************************************************************
	 * This Function implies with taking a object of same class and returning the object of that class
	 * ****************************************************************************************************/

		Person copyConstruct(Person p)
		{
			Person temp;
			temp.age=age+p.age;
			return temp;
		}

	/***************************************************************************************************
	 *  '+' operator overloaded here 
	 * *********************************************************************/
		Person operator +(Person p)
		{
			Person temp;
			temp.age=age+p.age;
			return temp;
		}
	};

	void Person::setName(char *name)
	{
		strcpy(this->name,name);
	}

	
	char *Person::getName()
	{
		return name;
	}

	int main(void)
	{
		Person p1,p2,p3;
		p1.setAge(25);
		int age=p1.getAge();
		cout<<"Age: "<<age;
		char c[]="Rahul";
		p1.setName(c);
		char *name=p1.getName();
		cout<<"Name: "<<name;

		p2.setAge(25);
		
		p3=p1.copyConstruct(p2);

		p3=p1+p2;	//through '+' operator overloading

		cout<<"NewAge: "<<p3.getAge();



	}
