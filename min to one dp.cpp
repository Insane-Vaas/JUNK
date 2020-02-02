#include<iostream>
#include<climits>
using namespace std;

int minsteps(int n,int dp[]){
	
	//base case	
	if(n==1){
		return 0;
	}
	
	//rec. case
	
	//lookup
	if(dp[n]!=0){
		
		return dp[n];
		
	}
	
	//we have 3 options
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	
	if(n%3 == 0){
		
		op1 = minsteps(n/3,dp) + 1 ;
		
	}
	
	if(n%2==0){
		
		op2 = minsteps(n/2,dp) + 1 ;
		
	}
	
	op3 = minsteps(n-1,dp) + 1;
	
	int ans = min(min(op1,op2),op3) ;
	
	return dp[n] = ans;
	
}


int main(){
	
	int n;
	cin>>n;
	
	int dp[10000] = {0};
	
	cout<<minsteps(n,dp);
	
}
