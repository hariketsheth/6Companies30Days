/*
Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/
Title: Minimum Size Subarray Sum
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=(int)nums.size();
        vector<int> sums(n+1);
        for (int i=1; i<=n; ++i)
            sums[i]+=nums[i-1]+sums[i-1];
        for (int offset=0; offset<n; ++offset){
            for (int i=0; i+offset<n; ++i){
                int left=i,right=i+offset;
                int currSum=sums[right+1]-sums[left];
                if (currSum>=target)
                    return offset+1;
            }
        }
        return 0;
    }
};
