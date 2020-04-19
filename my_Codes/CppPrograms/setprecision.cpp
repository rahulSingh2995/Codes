// C++ program to compare 
// floating point numbers 

#include <bits/stdc++.h> 
using namespace std; 

void printFloatNum(double a, double b) 
{ 
	// To print decimal numbers up to 20 digits 
	cout << setprecision(20); 
	cout << "a is : " << a << endl; 
	cout << "b is : " << b << endl; 
} 

// Driver code 
int main() 
{ 
	double a = (0.3 * 3) + 0.1; 
	double b = 1; 
	printFloatNum(a, b); 
} 

