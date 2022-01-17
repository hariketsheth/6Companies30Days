/*
Problem Link: https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/
Title: Column name from a given column number
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        string column;
        while(n>0){
            char c='A'+(n-1)%26;
            column.push_back(c);
            if(n%26==0) n--;
            n/=26;
            
        }
        reverse(column.begin(),column.end());
        return column;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
