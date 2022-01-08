/*
Problem Link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/
Title: IPL 2021 - Match Day 2
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int>ans;
        multiset<int>m;
        for(int i=0;i<k;i++)
        {
            m.insert(arr[i]);
        }
        ans.push_back(*m.rbegin());
        for(int i=k;i<arr.size();i++)
        {
             m.erase(m.find(arr[i-k]));
             m.insert(arr[i]);
             ans.push_back(*m.rbegin());
        }
        return ans;
    }
};

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
