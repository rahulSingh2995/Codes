// CPP program to implement Queue using two stacks with costly deQueue() 
#include <bits/stdc++.h> 
using namespace std; 

struct Queue { 
	stack<int> s1, s2; 

	// Enqueue an item to the queue 
	void enQueue(int x) { 
		s1.push(x); 
	} 

	// Dequeue an item from the queue 
	int deQueue(){ 
		// if both stacks are empty 
		if (s1.empty() && s2.empty()) { 
			cout << "Q is empty"; 
			exit(0); 
		} 

		// if s2 is empty, move elements from s1 
		if (s2.empty()) { 
			while (!s1.empty()) { 
				s2.push(s1.top()); 
				s1.pop(); 
			} 
		} 

		// return the top item from s2 
		int x = s2.top(); 
		s2.pop();

		while(!s2.empty()){
//			cout<<"stack 2 top element popped: "<<s2.top()<<"\n";
			s1.push(s2.top());
			s2.pop();
		}

		return x; 
	} 
	
	void showStack(){
		while(!s1.empty()){
			s2.push(s1.top());
			cout<<s1.top()<<" ";
			s1.pop();
		}

		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
		cout<<"\n";
	}

}; 

int main() 
{ 
	Queue q; 
	q.enQueue(1); 
	q.enQueue(2); 
	q.enQueue(3); 

	q.deQueue(); 
	cout<<"After One Dequeue\n";
	q.showStack();

	cout<<"After enqueue 4\n";
	q.enQueue(4); 
	q.showStack();
	q.deQueue(); 
	q.showStack();
	q.enQueue(5);
	q.showStack();

	return 0; 
} 

