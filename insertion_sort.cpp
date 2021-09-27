#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void insertion_sort(int arr[],int n){
	if(n==1){
		return;
	}
	insertion_sort(arr,n-1);
	int last=arr[n-1];
	int j=n-2;
	while(j>=0 && arr[j]>last){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=last;
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
	insertion_sort(arr,n);
	print_array(arr,n);
	
}
