#include <iostream>
 
using namespace std;
 
void mergeFun(int*,int,int,int,int&); 
void mergeSort(int*,int,int,int&);

int main(void){
	int size;
	int i=0;
	int count=0;
	cout<<"Input the size of the array: ";
	cin>>size;
 
	int arr[size];
	cout<<"Start giving Inputs: ";
	for(i=0;i<size;i++)
		cin>>arr[i];
 
	mergeSort(arr,0,size-1,count);
 
	cout<<endl<<"Important Reverse Pair: "<<count<<endl;
	return 0;
}

void mergeSort(int *arr,int start,int end,int &count){
	int mid;
	if (start<end){
		mid=(start+end)/2;
		mergeSort(arr,start,mid,count);
		mergeSort(arr,mid+1,end,count);
		mergeFun(arr,start,end, mid,count);
	}
}

void mergeFun(int *arr,int start,int end,int mid,int &count){
	int i,j,k; 
	int temp[end-start+1];
	i=start;
	k=0;
	j=mid+1;
 
	while (i<=mid && j<=end){
		if(arr[i] < arr[j]){
			temp[k]=arr[i];
			k++;
			i++;
		}

		else if(arr[i]==arr[j]){
			temp[k]=arr[j];
			k++;
			j++;
		}
			
		else{
			temp[k]=arr[j];
			count++;
			k++;
			j++;
		}
	}
 
	while (i <= mid){
		temp[k]=arr[i];
		k++;
		i++;
	}
 
	while (j<=end){
		temp[k] = arr[j];
		k++;
		j++;
	}
 
	for (i=start;i<=end;i++){
		arr[i]=temp[i-start];
	}
}
