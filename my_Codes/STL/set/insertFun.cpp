// CPP program to demonstrate the 
// set::insert(iterator, element) function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	set<int> s; 

	// Function to insert elements 
	// in the set container 
	auto itr = s.insert(s.begin(), 8); 

	// the time taken to insertion 
	// is very less as the correct 
	// position for isnertion is given 
	itr = s.insert(itr, 4); 
	itr = s.insert(itr, 2); 
	itr = s.insert(itr, 5); 
	itr = s.insert(itr, 3); 

	cout << "The elements in set are: "; 
	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; 

	return 0; 
} 

