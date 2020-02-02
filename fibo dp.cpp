#include<iostream>
using namespace std;

 int dp[100000000] = {0};

int fibo(int n,int dp[]){
	
	if( n==0 or n==1 ){
		
		return n;
		
	}
	
	if(dp[n]!=0){
	
		return dp[n];
	
	}
	
	int ans;
	ans = fibo(n-1,dp)+fibo(n-2,dp);
	
	return dp[n] = ans;
	
}

int main(){
	
	int n;
	
	cin>>n;
	
	cout<<fibo(n,dp)<<endl;
	
	
}
