#include<iostream>
using namespace std;

int notusing(int a,int b){
	
	if(b==0){
		return 0;
	}
	
	int sum = a + notusing(a,b-1);
	
}

int main(){
	
	int a,b;
	
	a =5;
	b=5;
	
	cout<<notusing(a,b);
	
}
