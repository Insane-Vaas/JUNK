#include<iostream>
using namespace std;

int power(int n,int m){
	
	if(m==0){
		
		return 1;
		
	}
	
	return n*power(n,m-1);
	
}

int main(){
	
	int n;
	cin>>n;
	
	int m;
	cin>>m;
	
	cout<<power(n,m);
	
}
