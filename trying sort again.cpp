#include<iostream>
using namespace std;

void sort(int* arr, int i){
	
	//base case
	if(arr[i] == '\0'){
		
		return;
		
	}
	
	if(arr[i-1]>arr[i]){
		
		swap(arr[i-1],arr[i]);
		
		sort(arr,0);
		
	}
	
	sort(arr,i+1);
	
	
}


int main(){
	
	int arr[100] = {0};
	
	int size;
	cin>>size;
	
	for(int i=0;i<size;i++){
		
		cin>>arr[i];
		
	}
	
	sort(arr,1);
	
	for(int i=0;i<size;i++){
		
		cout<<arr[i]<<"  ";
		
	}
	
}
