#include<iostream>
#include<string.h>
using namespace std;

	class Person
	{
		int age;
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

		void setHeight(int height)
		{
			this->height=height;
		}

		int getHeight()
		{
			return height;
		}
	};


	int main(void)
	{
		Person p1;
		p1.setAge(25);
		p1.setHeight(172);	
		
		int Age=p1.getAge();
		int Height= p1.getHeight();

		cout<<endl<<"Through public Functions: "<<endl;
		cout<<"Age: "<<Age<<endl;
		cout<<"Height: "<<Height<<endl;

		int *ptr=(int*)&p1;
		*ptr=30;
		*++ptr=180;

		
		Age=p1.getAge();
		Height= p1.getHeight();
		
		cout<<"After Changing values of private members without public members-"<<endl;
		
		cout<<"\nValue Printed Using Public member function: \n";
		cout<<"Age: "<<Age<<endl;
		cout<<"Height: "<<Height<<endl;

		cout<<"\nValue Printed without Using Public member function: \n";
		cout<<"Age: "<<*--ptr<<endl;
		cout<<"Height: "<<*++ptr<<endl;
	}



/*

Output:

thakur@Rahul:~/Downloads$ ./a.out 

Through public Functions: 
Age: 25
Height: 172
After Changing values of private members without public members-

Value Printed Using Public member function: 
Age: 30
Height: 180

Value Printed without Using Public member function: 
Age: 30
Height: 180

*/
