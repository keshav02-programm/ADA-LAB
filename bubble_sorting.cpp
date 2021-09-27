#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void bubble_sort(int arr[],int n){
	if(n==1){
		return;
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
	}
	bubble_sort(arr,n-1);
}
void print_array(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
}
int main(){
	int k,n;
	cout<<"how many terms to be sorted: ";
	cin>>k;
	int arr[k];
	srand(time(0));
	for(int i=0;i<k;i++){
		arr[i]=rand();
	}
	n=sizeof(arr)/sizeof(arr[0]);
	
	print_array(arr,n);
	cout<<"sorted array :\n";
	bubble_sort(arr,n);
	print_array(arr,n);
	
}
