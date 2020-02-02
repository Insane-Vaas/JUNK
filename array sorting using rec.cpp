#include<iostream>
using namespace std;


bool sort(int* n,int size){
	
	if(size == 1){
		
		return true;
		
	}
	
	if(n[0]<n[1] && sort(n+1,size-1)){
		
		return true;
		
	}
	
	return false;
	
	
}


int main(){
	
	int n[] = {3,1,2,4};
	int i;
	int size = sizeof(n)/4;
	
	if(sort(n,size)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
	
}
