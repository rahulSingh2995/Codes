#include <iostream>
#include <set>
int main ( ) {
      std::set<int> first;                           // empty set of ints
      int myints[]= {10,20,30,40,50};
      std::set<int> second (myints,myints+5);        // range
      std::set<int> third (second);                  // a copy of second
      std::set<int> fourth (second.begin(), second.end());  // iterator ctor.
	
      
      for(auto itr=second.begin();itr!=second.end();++itr){
		std::cout<<*itr<<" ";
      } 
	std::cout<<"\n";

      for(auto itr=third.begin();itr!=third.end();++itr){
		std::cout<<*itr<<" ";
      } 
	std::cout<<"\n";

      for(auto itr=fourth.begin();itr!=fourth.end();++itr){
		std::cout<<*itr<<" ";
      } 
	std::cout<<"\n";

     return 0;
}

