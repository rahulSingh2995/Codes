#include<iostream>
using namespace std;

#define Arrsize 10

	void display(int arr[],int size){
		cout<<"Array is: ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<"\t";
		}
		cout<<"\n";
	}

	void findKey(int arr[],int size,int key){
		bool flag=true;
		int first=0;
		int last=size-1;
		int mid;
		while(flag){

			mid=(first+last)/2;
			cout<<"In while:\tfirst="<<first<<" last="<<last<<" mid="<<mid<<endl;

			if(arr[mid]==key){
				cout<<"Found at index: "<<mid<<endl;
				return;
			}

			else if (first==mid && mid==last){
				cout<<"Not Found in Array"<<endl;
				return;
			}


			else if(arr[mid]>key){
				cout<<"In else if(arr[mid]>key)\n";
				last=mid-1;
			}

			else if(arr[mid]<key){
				cout<<"In else (arr[mid]<key)\n";
				first=mid+1;
			}
			
			else
				cout<<"WTF\n";
		}
		
		
	}

int main(){
	int arr[Arrsize]={1,5,8,10,12,17,26,34,47,59};
	int key;
	display(arr,Arrsize);
	cout<<"Index is: ";
	for(int i=0;i<Arrsize;i++)
		cout<<i<<"\t";

	cout<<"\ninput Key: ";
	cin>>key;
	findKey(arr,Arrsize,key);
}
