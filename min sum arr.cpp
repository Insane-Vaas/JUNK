#include<iostream>
using namespace std;

int minsum(int* arr,int i,int ans){
	
	if(arr[i] == 0 or i < 0){
		
		return 1;
		
	}
	
	
	
	ans = arr[i]*arr[i-1];
	
	minsum(arr,i-1,ans);
	
	return ans;
	
}


int main(){
	
	int arr[100] = {0};
	
	int ans;
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	}
	
	cout<<minsum(arr,n,ans);
	
	
}
