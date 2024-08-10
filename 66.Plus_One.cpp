// Problem Link: https://leetcode.com/problems/plus-one/description/
// Problem Statement: You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.




#include<bits/stdc++.h>
// #define ll long long int ;
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
    
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    // If the control reaches here, it means all digits were 9.
    digits.insert(digits.begin(), 1);
    return digits;
}
};

int main()
{
  Solution sol;
  vector<int>digits = {9,9,9};
  // cout<<digits.size();
  sol.plusOne(digits);
  return 0;
}