#include<iostream>
using namespace std;
int sol;

int fact(int i){
	
	if(i==0){
		return 1;
		
	}
	
	sol = i*fact(i-1);
	
	return sol;
	
}

int main(){
	
	int i = 16;
	
	fact(i);
	
	cout<< sol;
}
