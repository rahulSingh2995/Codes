#include<iostream>
using namespace std;

		int price;
		float balance;
		
		template <class X, class Y>
		void setPrice(X x1,Y y1)
		{
			price=x1;
			balance=y1;
		}
		
	int main(void)
	{
		setPrice<int,float>(25,24.3);
		cout<<"Price= "<<price<<endl;
		cout<<"Balance= "<<balance<<endl;
		
		return 0;
	}
