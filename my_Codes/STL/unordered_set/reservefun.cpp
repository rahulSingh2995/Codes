// C++ program to illustrate 
// the unordered_set.reserve() 
#include <iostream> 
#include <string> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 
	// Declaration of unordered_set 
	unordered_set<string> us; 

	us.reserve(3); 

	us.insert("geeks"); 
	us.insert("for"); 
	us.insert("geeks"); 
	us.insert("users"); 
	us.insert("geeksforgeeks"); 

	for (auto it = us.begin(); it != us.end(); it++) { 
		cout << *it << " "; 
	} 

	return 0; 
} 

