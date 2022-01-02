/*
Problem Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/
Title: Greatest Common Divisor of Strings
Difficulty: Easy
Author: Hariket Sukesh Kumar Sheth
Language: C++
*/

class Solution {
public:
	string gcdOfStrings(string& str1, string& str2) {
		int result = gcd(str1.length(), str2.length());
		return (str1 + str2 == str2 + str1) ? str1.substr(0, result) : "";
	}
};
