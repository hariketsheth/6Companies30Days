/*
Problem Link: https://leetcode.com/problems/longest-mountain-in-array/
Title: Longest Medium in Array
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n-1;)
        {
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
            {
                int cnt=1;
                int j=i;
                while(j>=1 and arr[j]>arr[j-1])
                {
                    j--;
                    cnt++;
                }
                while(i<=n-2 and arr[i]>arr[i+1])
                {
                    i++;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
            else
                i++;
        }
        return ans;
    }
};
