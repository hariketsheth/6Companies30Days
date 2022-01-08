/*
Problem Link: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
Title: Maximum of all subarrays of size k
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        unordered_map<int,int>ump;
        deque<int>dq;
        for(int i = 0;i < k ;i++){
            ump[arr[i]]++;

            while(!dq.empty() and dq.back() <= arr[i]) dq.pop_back();
            dq.push_back(arr[i]);

        }
        vector<int>ans;
        ans.push_back(dq.front());

        for(int i = k ; i < n; i++){
            // erase last
            ump[arr[i - k]]--;

            // add end
            while(!dq.empty() and dq.back() <= arr[i]) dq.pop_back();
            ump[arr[i]]++;
            dq.push_back(arr[i]);

            // calculate max
            while(!dq.empty() and ump[dq.front()] == 0) dq.pop_front();
            ans.push_back(dq.front());
        }
        
        return ans;
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
} 
