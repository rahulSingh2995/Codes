// C++ program to print inorder traversal 
// using stack. 
#include<bits/stdc++.h> 
using namespace std; 

/* A binary tree Node has data, pointer to left child and a pointer to right child */
struct Node { 
	int data; 
	struct Node* left; 
	struct Node* right; 
	Node (int data){ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

/* Iterative function for inorder tree traversal */
void inOrder(struct Node *root) { 
	stack<Node *> s; 
	Node *curr = root; 

	while (curr != NULL || s.empty() == false) { 
		cout<<"In outer while\n";
		/* Reach the left most Node of the curr Node */
		while (curr != NULL) { 
			cout<<"In inner while\n";
			/* place pointer to a tree node on the stack before traversing the node's left subtree */
			cout<<"Value to be pushed on stack="<<curr<<endl;
			s.push(curr); 
			curr = curr->left; 
		} 

		/* Current must be NULL at this point */
		curr = s.top(); 
		cout<<"Value to be popped on stack="<<curr<<endl;
		s.pop(); 

		cout << curr->data << " "; 

		/* we have visited the node and its left subtree. Now, it's right subtree's turn */
		curr = curr->right; 
		cout<<"Now,Curr value ="<<curr<<endl;

	} /* end of while */
} 

/* Driver program to test above functions*/
int main() { 
	struct Node *root = new Node(1); 
	root->left	 = new Node(2); 
	root->right	 = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right = new Node(5); 

	inOrder(root); 
	return 0; 
} 

