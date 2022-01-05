/*
Problem Link: https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
Title: Maximum Profit
Difficulty: Hard
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(int k, int n, int a[]){
       int profit[k+1][n];
       memset(profit,0,sizeof(profit));
       for(int i=1;i<=k;i++)
       {
           int min=INT_MIN;
           for(int j=1;j<n;j++)
           {
               min=max(min,profit[i-1][j-1]-a[j-1]);
               profit[i][j]=max(profit[i][j-1],min+a[j]);
           }
       }
       return profit[k][n-1];
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
} 
