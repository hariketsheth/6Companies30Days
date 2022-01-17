/*
Problem Link: https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1
Title: Nuts and Bolts Problem
Difficulty: Medium
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>

using namespace std;
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
