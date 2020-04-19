//((If a year is divisible by 4) && (not divisible by 100)) || (divisible by 400)
#include <bits/stdc++.h> 
using namespace std; 

bool checkYear(int year) { 
	return(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)); 
} 


int main() 
{ 
	int year;
	cout<<"Enter a Year: ";
	cin>>year; 
	checkYear(year)? cout << "Leap Year"<<endl: cout << "Not a Leap Year"<<endl; 
	return 0; 
} 


