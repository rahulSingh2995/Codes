#include<iostream>
#include"node.h"
using namespace std;

	class BST{
			node *head;
		public:
			BST(){	  head=NULL;	}

			node* getHead(){  return head;	}
			
			void setHead(node *head){  this->head=head;   }

			node* newNode(node *temp){
				temp=new node;
				temp->left=NULL;
				temp->right=NULL;
				return temp;
			}

			node* insertInBST(node *head,int data){
				node *temp=head;
				if(temp==NULL){
					temp=newNode(temp);
					temp->data=data;
					return temp;
				}

				if(data==temp->data)
					return temp;

				if(data > temp->data){
					temp->right=insertInBST(temp->right,data);	
				}
				else
					temp->left=insertInBST(temp->left,data);
			}

			void displayBST(node *temp){
				if(temp==NULL)
					return;
				displayBST(temp->left);
				cout<<temp->data<<" ";
				displayBST(temp->right);
			}

			void searchInBST(node* temp,int item){
				if(temp==NULL){
					cout<<"Not Found\n";
					return;
				}

				if(item == temp->data){
					cout<<"Found\n";
					return;
				}	
				
				if(item < temp->data)
					searchInBST(temp->left,item);				
				else
					searchInBST(temp->right,item);				
					
				return;
			}


			node* findInorderSucc(node * temp){
				if(temp==NULL || temp->left==NULL)
					return temp;

				while(temp->left->left!=NULL)
					temp=temp->left;
				
				return temp->left;
			}


			node* deleteInBST(node *temp,int item){
				if(temp==NULL)
					return temp;
				
				if(item < temp->data)
					temp->left=deleteInBST(temp->left,item);
				else if (item > temp->data)
					temp->right=deleteInBST(temp->right,item);

				else {
					if(temp->left==NULL && temp->right==NULL){	// ptr is a leaf node
						delete(temp);
						temp=NULL;
						return temp;
					}

					else if(temp->left==NULL){
						temp->data=(temp->right)->data;
						delete(temp->right);
						temp->right=NULL;
						return temp;
					}

					else if(temp->right==NULL){
						temp->data=(temp->left)->data;
						delete(temp->left);
						temp->left=NULL;
						return temp;
					}

					else{
						node* temp2=findInorderSucc(temp->right);
						temp->data=temp2->data;
						delete(temp2);
						temp2=NULL;
						temp->right=NULL;
					}	
				}

				return temp;
			}
	};

int main(){
	int data;
	BST b1;
	b1.setHead(b1.insertInBST(b1.getHead(),50));
	b1.insertInBST(b1.getHead(),30);
	b1.insertInBST(b1.getHead(),20);
	b1.insertInBST(b1.getHead(),40);
	b1.insertInBST(b1.getHead(),70);
	b1.insertInBST(b1.getHead(),60);
	b1.insertInBST(b1.getHead(),80);
	b1.displayBST(b1.getHead());
	cout<<"\n";		

	b1.searchInBST(b1.getHead(),15);

	cout<<"Deleting 70\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),70));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	cout<<"Deleting 80\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),80));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	cout<<"Deleting 30\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),30));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	cout<<"Deleting 50\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),50));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		
	
	cout<<"Deleting 40\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),40));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	cout<<"Deleting 20\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),20));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	cout<<"Deleting 60\n";
	b1.setHead(b1.deleteInBST(b1.getHead(),60));
	b1.displayBST(b1.getHead());		
	cout<<"\n";		

	return 0;
}
