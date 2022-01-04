/*
Problem Link: NA
Title: Find total number of Squares in a N*N chessboard
Difficulty: Basic
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void countSquares( n)
    {
        cout << (n * (n + 1) / 2) * (2*n + 1) / 3 <<endl;
    }
};
