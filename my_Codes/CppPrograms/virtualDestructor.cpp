
//Program -1 	// Comment this Program and its result and then run Program-2

/*
#include <iostream>

using namespace std;

class Base
{
public:
    Base(){
        cout << "Base Constructor Called\n";
    }
    ~Base(){
        cout << "Base Destructor called\n";
    }
};

class Derived1: public Base
{
public:
    Derived1(){
        cout << "Derived constructor called\n";
    }
    ~Derived1(){
        cout << "Derived destructor called\n";
    }
};

int main()
{
    Base *b = new Derived1();
    delete b;
}

*/

/* result:

Base Constructor Called
Derived constructor called
Base Destructor called

*/


//Program -2 	// Comment this Program and its result and then run Program-1

#include <iostream>

using namespace std;

class Base
{ 
public:
    Base(){
        cout << "Base Constructor Called\n";
    }
    virtual ~Base(){
        cout << "Base Destructor called\n";
    }
};

class Derived1: public Base
{
public:
    Derived1(){
        cout << "Derived constructor called\n";
    }
    ~Derived1(){
        cout << "Derived destructor called\n";
    }
};

int main()
{
    Base *b = new Derived1();
    delete b;
}

// results:

/*

Base Constructor Called
Derived Constructor called
Derived destructor called
Base destructor called

*/
