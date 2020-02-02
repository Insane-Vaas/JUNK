#include<iostream>
using namespace std;

int sum;

int fibbo(int n){
	
	if(n==0 || n==1){
		
		return n;
		
	}
	
	sum = fibbo(n-1) + fibbo(n-2);
	
	return sum;
}


int main(){
	
	int n;
	cin>>n;
	
	fibbo(n);
	
	cout<<sum;
	
}
