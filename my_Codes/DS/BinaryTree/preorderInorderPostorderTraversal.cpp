// cpp program to see Preorder-Inorder-Postorder traversal
#include<bits/stdc++.h> 
using namespace std; 

struct Node { 
	int key; 
	Node *left, *right; 

	Node (int x) { 
		key = x; 
		left = right = NULL; 
	} 
}; 

/* Pre-order traversal of a binary tree*/
void preOrder(Node* temp) { 
	if (!temp) 
		return; 

	cout << temp->key << " "; 
	preOrder(temp->left); 
	preOrder(temp->right); 
}

/* Inorder traversal of a binary tree*/
void inorder(Node* temp) 
{ 
    if (!temp) 
        return; 
  
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 
 
/* Post-order traversal of a binary tree*/
void postOrder(Node* temp) { 
	if (!temp) 
		return; 

	postOrder(temp->left); 
	postOrder(temp->right); 
	cout << temp->key << " "; 
} 


int main() { 
	Node* root = new Node(10); 
	root->left = new Node(11); 
	root->left->left = new Node(7); 
	root->right = new Node(9); 
	root->right->left = new Node(15); 
	root->right->right = new Node(8); 

	cout << "Pre-rder traversal before insertion:"; 
	preOrder(root); 
	cout << endl; 

	cout << "Inorder traversal before insertion:"; 
	inorder(root); 
	cout << endl; 

	cout << "post-Order traversal after insertion:"; 
	postOrder(root); 
	cout << endl; 

	return 0; 
} 

