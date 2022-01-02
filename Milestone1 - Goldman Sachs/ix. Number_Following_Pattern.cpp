/*
Problem Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
Title: Number following a pattern
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string printMinNumberForPattern(string s){
        string res="";
        stack<int> st;
        int num=1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                st.push(num++);
            }
            else
            {
                st.push(num++);
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num++);
        while(!st.empty()){
            res+=to_string(st.top());
            st.pop();
        }
        
        return res;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
