#include<bits/stdc++.h>
using namespace std;
long int Fibonacci (int n){
	if(n<=1)
		return n;
	return Fibonacci (n-1)+Fibonacci (n-2);
	}
int main(){
	int num,m=0;
	cout<<"enter number to find Fibonacci series: ";
	cin>>num;
	cout<<"series are :\n";
	for(int i=1;i<=num;i++){
		cout<<" "<<Fibonacci (m);
		m++;
	}
	return 0;
}
