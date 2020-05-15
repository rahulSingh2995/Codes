#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;

		node();
        node(int);
};


#endif
