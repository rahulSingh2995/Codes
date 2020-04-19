//Class template program with function defined inside Class
#include <iostream> 
using namespace std; 

template <typename T> 
class Array { 
private: 
	T *ptr; 
	int size; 
public: 
	Array(T arr[], int s)	//template Constructor
	{
		ptr = new T[s]; // pointer is provided memory here
		size = s; 
		for(int i = 0; i < size; i++) 
			ptr[i] = arr[i]; 
	}
	
	void print()
	{
		for (int i = 0; i < size; i++) 
			cout<<" "<<*(ptr + i); 
		cout<<endl; 
	}
}; 

int main() { 
	int arr[5] = {1, 2, 3, 4, 5}; 
	Array<int> a(arr, 5); 
	a.print(); 
	return 0; 
} 

