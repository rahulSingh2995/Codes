/*
Design a stack with operations on middle element

How to implement a stack which will support following operations in O(1) time complexity?
1) push() which adds an element to the top of stack.
2) pop() which removes an element from top of stack.
3) findMiddle() which will return middle element of the stack.
4) deleteMiddle() which will delete the middle element.
Push and pop are standard stack operations. 
*/

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *prev;
		Node *next;
		Node (){ }
		Node (int data){
			this->data=data;
			prev=NULL;
			next=NULL;
		}
};


class stackDLL{
	int i;
	public:
	stackDLL(){i=0;}
	void push(Node **head,Node **mid,Node **top,int data){
		Node *newNode=new Node(data);
		if(*head==NULL){
			*head=newNode;
			*mid=*head;
			*top=*head;
			i++;
			return;
		}
		
		newNode->prev=*top;		
		(*top)->next=newNode;
		*top=(*top)->next;

		cout<<"i="<<i<<"\n";
		if(!(i & 1)){	// if the count is even in push opeartion, move the mid pointer one step ahead	
			*mid=(*mid)->next;
			cout<<"Mid pointer moved ahead\n";
		}
		i++;
	}
	
	void pop(Node **head,Node **mid,Node **top){
		if(*head==NULL){
			cout<<"List is Empty !!\n";
			return;
		}

		if((*head)->next==NULL){		// if in link list its the last node to be deleted, then bring all value to initial values
			*head=NULL;
			*top=NULL;
			*mid=NULL;
			return;
		}

		Node *temp=*top;
		*top=(*top)->prev;
		(*top)->next=NULL;
		delete(temp);

		if(i & 1){				// if i is odd , move the mid pointer one node back
			*mid=(*mid)->prev;
		}

		i--;	// decrement the node count



	}

	void display(Node *top){		// we know that stack is printed in reverse order, and we have DLL here, so lets do it likewise
		if(top==NULL){
			cout<<"The List is Empty !!";
			return;
		}
		while(top!=NULL){
			cout<<top->data<<"-->";
			top=top->prev;
		}
		cout<<"\n";
	}
	
	int getMidValue(Node *mid){
		if(mid==NULL){
			cout<<"The List is Empty !!";
			return -1;
		}
		return mid->data;
	}

	void deleteMidNode(Node **head,Node **mid,Node **top){
		if(*head==NULL){
			cout<<"List is Empty !!\n";
			return;
		}

		if((*head)->next==NULL){		// if in link list its the last node to be deleted, then bring all value to initial values
			*head=NULL;
			*top=NULL;
			*mid=NULL;
			i=0;			// initial valu of i was set to 0
			return;
		}
		
		Node *temp=NULL;

		if((*head)->next->next==NULL){
			cout<<"In head->next->next\n";
			temp=*head;
			*head=*top;
			*mid=*top;
			(*top)->prev=NULL;
			delete(temp);
			i--;
			return;
		}	

		temp=*mid;
		(*mid)->prev->next=(*mid)->next;
		(*mid)->next->prev=(*mid)->prev;
		delete(temp);

		if(i & 1)
			*mid=(*mid)->prev;
		else
			*mid=(*mid)->next;
		i--;
	}

};


int main(){
	int data,choice;
	Node *head=NULL,*mid=NULL,*top=NULL;
	stackDLL s;
	while(1){
		cout<<"Input an Option:\n1. Push\n2. Pop\n3. Display\n4. Get Middle Element\n5. Delete Mid Value\n6. Exit\n";
		cin>>choice;
		switch(choice){
			case 1: 
				cout<<"Input the data to be pushed: ";
				cin>>data;
				s.push(&head,&mid,&top,data);
				break;
			case 2:
				s.pop(&head,&mid,&top);
				break;
			case 3:
				s.display(top);	
				break;
			case 4:
				cout<<"Mid Value="<<s.getMidValue(mid)<<"\n";
				break;
			case 5:
				s.deleteMidNode(&head,&mid,&top);
				break;
			case 6: exit(0);
			default: cout<<"Input a Valid Option !\n";
		}
	}
	return 0;
}

