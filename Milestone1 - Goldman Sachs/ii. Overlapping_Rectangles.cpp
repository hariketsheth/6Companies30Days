/*
Problem Link: https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/
Title: Overlapping Rectangles
Difficulty: Easy
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if (L1[0] > R2[0] || L2[0] > R1[0])
            return 0;
        if (R1[1] > L2[1] || R2[1] > L1[1])
            return 0;
        return 1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}
