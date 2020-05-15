#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
	Node(){}
	Node(int data){
		this->data=data;
		next=NULL;
	}
};

class CLL{
	private:
		Node *head=NULL;
	public:
		CLL(){}
		Node * getHead(){
			return head;
		}

		void insertAtEnd(int data){
			Node *newNode=new Node(data);
			if(head==NULL){
				head=newNode;
				head->next=head;
				return;
			}

			Node *temp=head;
			while(temp->next!=head)
				temp=temp->next;
			
			temp->next=newNode;
			temp->next->next=head;
		}

		void insertAtBegin(int data){
			Node *newNode=new Node(data);
			if(head==NULL){
				head=newNode;
				head->next=head;
				return;
			}
			
			Node* temp=head;
			while(temp->next!=head)
				temp=temp->next;

			newNode->next=head;
			head=newNode;
			temp->next=head;
			
		}

		void display(){
			if(head==NULL){
				cout<<"The List is Empty !!\n";
				return;
			}
			Node *temp=head;
			while(temp->next!=head){
				cout<<temp->data<<"-->";
				temp=temp->next;
			}
			cout<<temp->data<<"-->";
			cout<<"\n";
		}
	
		void deleteAtEnd(){
			if(head==NULL){
				cout<<"The List is Empty !!\n";
				return;
			}

			if (head->next==head){
				head=NULL;
				return;
			}

			Node *temp=head;
			Node *temp2=NULL;
			while(temp->next!=head){
				temp2=temp;
				temp=temp->next;
			}
			
			temp2->next=head;
			delete(temp);
		}
	
		void deleteAtBegin(){
			if(head==NULL){
				cout<<"The List is Empty !!\n";
				return;
			}
			
			if (head->next==head){
				head=NULL;
				return;
			}

			Node *temp=head,*temp2=head;
			while(temp->next!=head)
				temp=temp->next;

			head=head->next;
			temp->next=head;
			delete(temp2);
		}
};


int main(){
	CLL c;
	
	//Expermnet-1:
	/*
	c.insertAtEnd(5);
	c.insertAtEnd(10);
	cout<<"val="<<(c.getHead())->data<<"\n";
	cout<<"val="<<(c.getHead())->next->data<<"\n";
	cout<<"val="<<(c.getHead())->next->next->data<<"\n";
	cout<<"val="<<(c.getHead())->next->next->next->data<<"\n";
	*/

	// Experment-2
//	/*

	int data,choice;
	while(1){
		cout<<"Choose an Option:\n1. Insert At Beginning\n2. Insert at End\n3. display\n4. Delete At End\n5. Delete At Start\n6. Exit\n";
		cin>>choice;
		switch(choice){
			case 1: 
				cout<<"Input the Number to be Inserted: ";
				cin>>data;
				c.insertAtBegin(data);
				break;
			case 2: 
				cout<<"Input the Number to be Inserted: ";
				cin>>data;
				c.insertAtEnd(data);
				break;
			case 3: c.display();
				break;
			case 4: c.deleteAtEnd();
				break;
			case 5: c.deleteAtBegin();
				break;
			case 6: exit(0);
			default: cout<<"Input a Valid option !!";
		}
	}


//	*/
	return 0;
}
