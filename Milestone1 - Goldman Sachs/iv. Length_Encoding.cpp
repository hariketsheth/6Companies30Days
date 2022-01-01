/*
Problem Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
Title: Run Length Encoding
Difficulty: Easy
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{     
     string ans="";
     int len=src.length();
     {
         for(int i=0;i<len;i++)
         {
             ans.push_back(src[i]);
             int count=1;
             while(i<len-1 && src[i]==src[i+1])
             {
                 count++;
                 i++;
             }
             char c=count+'0';
             ans.push_back(c);
         }
     }
     return ans;
} 
