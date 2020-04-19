#include<iostream>
using namespace std;

short int fibo(short int n){
	if(n<=1){
		cout<<"n:"<<n<<endl;
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

int main(){
	short int n;
	cout<<"Input a Number: ";
	cin>>n;
	n=fibo(n);	
	cout<<"Result: "<<n<<endl;	
	return 0;
}
