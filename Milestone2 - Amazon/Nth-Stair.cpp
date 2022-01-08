/*
Problem Link: https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/
Title: Count ways to N'th Stair(Order does not matter) 
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/


 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        long long dp[m+1];
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=m;i++)
        dp[i]=min(dp[i-2],dp[i-1])+1;
        
        return dp[m];
    }
};

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends
