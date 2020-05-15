#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 

/**
 * pushes at start
 */
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

/**
 * pushes at end
 */
void push_back(struct Node ** head, int data)
{
	if(*head==NULL)
	{
		struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
		new_node->data = data;
		new_node->next=NULL;
		*head=new_node; 
		return;
	}

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = data;
	new_node->next=NULL; 
	struct Node* temp=*head;
	while(temp->next!=NULL)
		temp=temp->next;

	temp->next=new_node;
}

void printList(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

struct Node* mergeTwoSortedLL(struct Node* Head1,struct Node* Head2)
{
	struct Node dummy;
	struct Node* tail=&dummy;
	struct Node* res=NULL;
	tail->next=NULL;
	
	if(!Head1)
	{
		tail->next=Head2;
		return tail->next;
	}

	if(!Head2)
	{
		tail->next=Head1;
		return tail->next;
	}

	while(Head1 && Head2)
	{
		if(Head1->data <= Head2->data)
		{
			tail->next=Head1;	/// add the node to tail
			Head1=Head1->next;	/// forward the Head1
			tail=tail->next;	/// forward the tail
			tail->next=NULL;	/// cut the connection from the Head1
		}
		else
		{
			tail->next=Head2;
			Head2=Head2->next;
			tail=tail->next;
			tail->next=NULL;
		}
	}

	while(Head1)
	{
		tail->next=Head1;
		Head1=Head1->next;
		tail=tail->next;
	}

	while(Head2)
	{
		tail->next=Head2;
		Head2=Head2->next;
		tail=tail->next;
	}

	return dummy.next;
}

int main() 
{ 
	struct Node* head1 = NULL; 
	struct Node* head2 = NULL; 
	struct Node* head3 = NULL; 

	push_back(&head1, 4); 
	push_back(&head1, 8); 
	push_back(&head1, 17); 
	push_back(&head1, 30); 
	printf("Given linked list-1\n"); 
	printList(head1); 
	printf("\n");

	push_back(&head2, 6); 
	push_back(&head2, 14); 
	push_back(&head2, 17); 
	push_back(&head2, 19); 
	push_back(&head2, 22); 
	push_back(&head2, 28); 
	push_back(&head2, 35); 
	printf("Given linked list-2\n"); 
	printList(head2); 
	printf("\n");

	head3=mergeTwoSortedLL(head1,head2);
	printf("Merged LL-\n"); 
	printList(head3); 
	printf("\n");
	
} 

