#include<iostream>
using namespace std;

int ans = 1;


int minarr(int* arr,int i,int n,int ans){
	
	//base case
	
	if(arr[i] == 0 or arr[i] == '\0'){
		
		return ans;
		
	}
	
		
	ans  = arr[i]*ans ;
		
	minarr(arr,i+1,n,ans);
	
	
	 
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[100] = {0};
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		
	}
	
	cout<<minarr(arr,0,n,ans);

	
}
