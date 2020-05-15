// C++ program to illustrate the 
// unordered_set_swap() function 
#include <iostream> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 

	unordered_set<int> arr1 = { 1, 2, 3, 4, 5 }; 
	unordered_set<int> arr2 = { 5, 6, 7, 8, 9 }; 

	cout << "The elements of arr1 before swap(): "; 

	for (auto it = arr1.begin(); it != arr1.end(); it++) { 
		cout << *it << " "; 
	} 

	cout << "\nThe elements of arr2 before swap(): "; 
	for (auto it = arr2.begin(); it != arr2.end(); it++) { 
		cout << *it << " "; 
	} 

	// inbuilt swap function to swap 
	// elements of two unordered_set 
//	swap(arr1, arr2); 
	arr1.swap(arr2);
	cout << "\n\nThe elements of arr1 after swap(): "; 
	// elemen 
	for (auto it = arr1.begin(); it != arr1.end(); it++) { 
		cout << *it << " "; 
	} 

	cout << "\nThe elements of arr2 after swap(): "; 
	for (auto it = arr2.begin(); it != arr2.end(); it++) { 
		cout << *it << " "; 
	} 

	return 0; 
} 

