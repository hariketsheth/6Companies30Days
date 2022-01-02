/*
Problem Link: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/
Title: Total Decoding Messages
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int CountWays(string str){
	      int n=str.size();
		    long long int mod=1000000007;
		    int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    if(str[0]=='0')
		    return 0;
		    for(int i=2;i<=n;i++){
		        if(str[i-1]=='0' and str[i-2]!='0')
		        {
		            int num=stoi(str.substr(i-2,2));
		            if(num>26)
		            dp[i]=0;
		            else
		            dp[i]=dp[i-2]%mod;
		        }
		        else if(str[i-1]!='0' and str[i-2]=='0')
		        dp[i]=dp[i-1]%mod;
		        else if(str[i-1]=='0' and str[i-2]=='0')
		        dp[i]=0;
		        else{
		            int num=stoi(str.substr(i-2,2));
		            if(num>26)
		            dp[i]=dp[i-1]%mod;
		            else
		            dp[i]=(dp[i-1]+dp[i-2])%mod;
		        }
		        
		    }
		    return dp[n];
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
} 
