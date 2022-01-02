/*
Problem Link: https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1
Title: Find the position of M-th item 
Difficulty: Basic
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        while(--M) {
            K++;
            if(K == N+1) {
                K = 1;
            }
        }
        return K;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
} 
