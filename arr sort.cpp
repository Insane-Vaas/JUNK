#include<iostream>
using namespace std;


void arrsort(int* arr,int i){
	
	if(arr[i] == '\0'){
		
		return;
		
	}
	
	if(arr[i==arr[i+1]]){
		
		arrsort(arr,i+1);
		
	}
	
	
	if(arr[i]<arr[i+1] ){
		
		swap(arr[i],arr[i+1]);
		
		arrsort(arr,0);
		
	}
	else{
		
		arrsort(arr,i+1);
		
	}

	
}

int main(){
	
	int arr[100] = {0};
	int n;
	
	cin>> n;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
			
	}
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<"  ";
		
	}
		
	arrsort(arr,0);
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<"  ";
		
	}
		
}
