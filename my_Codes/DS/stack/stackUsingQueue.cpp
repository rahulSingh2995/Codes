#include<stdlib.h>
#include<iostream>
#include<queue>
using namespace std;

	class StackUsingQueue{
			queue <int> q1,q2;
		public:
			void push(int x){
				q1.push(x);

			}
		
			void pop(){
				int count=0;
				while(!q1.empty()){
					q2.push(q1.front());
					q1.pop();
					count++;
				}
				count--;
				while(count--){
					q1.push(q2.front());
					q2.pop();
				}
				q2.pop();
			}

			void display(){
				while(!q1.empty()){
					q2.push(q1.front());
					cout<<q1.front()<<" ";
					q1.pop();
				}
				
				cout<<"\n";
				
				while(!q2.empty()){
					q1.push(q2.front());
					q2.pop();
				}
			}
	};

	int main(){
		int choice,data;
		StackUsingQueue s;
		while(1){
			cout<<"Input a Choice:\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"Input a Value that you want to push on stack: ";
					cin>>data;
					s.push(data);
					break;
				case 2:
					s.pop();
					break;
				case 3:
					s.display();
					break;
				case 4: exit(0);
				default: 
					cout<<"Enter a Valid Option\n";	
					break;
			}
		}
		return 0;
	}
