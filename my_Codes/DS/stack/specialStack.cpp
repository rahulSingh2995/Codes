// This program will implement a stacka and provide minimum item with O(1) complexity
#include<stack>
#include<iostream>
#include<stdlib.h>
using namespace std;

class MYSTACK{
		stack <int> s1,s2;
	public:	
		void push(int x){
			s1.push(x);

			if(s2.empty())
				s2.push(x);
			else
				if(s2.top()>x)
					s2.push(x);
				
		}

		void pop(){
			if(s1.empty()){
				cout<<"Stack is Empty !!";
				return;
			}

			if(s1.top()==s2.top())
				s2.pop();

			s1.pop();
		}

		void display(){
			if(s1.empty()){
				cout<<"Stack is Empty !!";
				return;
			}

			stack <int> temp;
			while(!s1.empty()){
				temp.push(s1.top());
				cout<<s1.top()<<" ";
				s1.pop();
			}

			cout<<"\n";
		
			while(!temp.empty()){
				s1.push(temp.top());
				temp.pop();
			}
		}

		int getMin(){
			if(s1.empty()){
				cout<<"Stack is Empty !!";
				return 0;
			}
			return s2.top();
		}

};


int main(){
	MYSTACK s;
	int choice,data,min;
	while(1){
		cout<<"Please Enter an Option:\n1. Push\n2. Pop\n3. Display\n4. Get Minimum\n5. Exit\n";
		cin>>choice;

		switch(choice){
			case 1:
				cout<<"Enter Data to be Pushed: ";
				cin>>data;
				s.push(data);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				min=s.getMin();
				if(min==NULL)
					break;
				cout<<"Min val="<<min<<"\n";
				break;
			case 5: exit(0);
			default: 
				cout<<"Enter a Valid Option\n";
		}

	}

	return 0;
}
