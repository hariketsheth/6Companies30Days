/*
Problem Link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/
Title: Find Missing And Repeating
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(map[i]==0){
                ans[1]=i;
            }
            if(map[i]==2){
                ans[0]=i;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 
