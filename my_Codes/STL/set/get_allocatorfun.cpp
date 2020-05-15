// C++ program to demonstrate 
// std::set::get_allocator 

#include <iostream> 
#include <set> 

using namespace std; 

void input(int* a) 
{ 

	for (int i = 7; i >= 0; i--) 
		a[i] = i; 
} 

void output(int* a) 
{ 

	for (int i = 0; i < 7; i++) 
		cout << a[i] << " "; 

	cout << endl; 
} 

int main() 
{ 

	// declare set 
	set<int> mset; 

	// declare int pointer 
	int* arr; 

	cout << "size of int pointer is: "
		<< sizeof(arr) << endl; 

	// use allocator of set to allocate array arr. 
	arr = mset.get_allocator() 
			.allocate(7); 

	// insert elements(numbers from 0-6) 
	// in the array 
	input(arr); 

	// produce output from the array 
	output(arr); 


	// deallocate the memory allotted previously 
	mset.get_allocator() 
		.deallocate(arr, 7); 

	return 0; 
} 
