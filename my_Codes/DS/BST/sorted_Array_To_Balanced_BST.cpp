#include <iostream>
#include "node.h"
using namespace std;

	node* newNode(int data){
		node* temp= new node(data);
		return temp;
	}

	node* constructBSTFromArray(int arr[],int first,int last,node* head){
		if(last<0 || last<first)
			return NULL;
		
		int mid=first+(last-first)/2;
		head=newNode(arr[mid]);
		
		head->left=constructBSTFromArray(arr,first,mid-1,head->left);
		head->right=constructBSTFromArray(arr,mid+1,last,head->right);
		
		return head;
	}

	void displayBST(node* head){
		if(head==NULL)
			return;

		displayBST(head->left);
		cout<<head->data<<" ";
		displayBST(head->right);
	}

int main(){
	int arr[]={10,20,30,40,50,60,70};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size="<<size<<"\n";
	node* head=NULL;
	head=constructBSTFromArray(arr,0,size-1,head);
	displayBST(head);
	return 0;
}
