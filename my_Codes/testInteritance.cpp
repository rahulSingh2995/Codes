#include<iostream>
using namespace std;

class Base
{ 
    int x;
    public:
    
    Base() 
    { 
        cout << "Base default constructor\n"; 
    }
    Base(int x) 
    { 
        cout << "Base Para~ constructor\n";
	this->x=x; 
    }

   int get_x()
    {
	return x;	
    }
	
};

class Derived : public Base
{ 
    int y;
    
    public:
  
    Derived(): Base()
    { 
        cout << "Derived default constructor\n"; 
    }

    Derived(int i,int j)// : Base (i),y(j) 
    { 
 	Base (i);
	y=j;
        cout << "Derived parameterized constructor\n"; 

    }

   int get_y()
    {
	return y;	
    }
};

int main()
{
 //   Base b;        
    Derived d1;    
   Derived d2(10,15);

	cout<<"value-x "<<d2.get_x()<<endl;
	cout<<"value-y "<<d2.get_y()<<endl;

}
