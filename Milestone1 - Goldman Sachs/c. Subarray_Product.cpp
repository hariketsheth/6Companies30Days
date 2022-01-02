/*
Problem Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
Title: Count the subarrays having product less than k
Difficulty: Hard
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k <= 1) return 0;
        int ans=0;
        long long prod=1, limit=0;
        for(int i=0; i<n; i++) {
            prod *= a[i];
            while(prod >= k) {
                prod /= a[limit];
                limit++;
            }
            ans += (i - limit + 1);
        }
        return ans;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
