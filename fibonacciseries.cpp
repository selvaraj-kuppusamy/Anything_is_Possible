#include<iostream>
using namespace std;
int main(){
	int i,j=0,k=1,fib,number;
	cout<<"Enter the Number :";
	cin>>number;
	cout<<"The Fibonacci series are : \n";
	cout<<j<<" "<<k<<" ";
	for(i=2;i<number;i++){
		fib=j+k;
		cout<<fib<<" ";
		j=k;
		k=fib;
	}
return 0;
}

	
