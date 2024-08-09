// Problem Link: https://leetcode.com/problems/plus-one/description/

#include<bits/stdc++.h>
// #define ll long long int ;
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
      long long int last = digits.size() -1;
      int i = 1;
      long long int number = 0;
      while(last>=0)
      {
        number = number + digits[last] * i;
        --last;
        i = i * 10;
      }
      // cout<<number;
      ++number;
      vector<int>second;
      while(number != 0)
      {
        second.push_back(number % 10);
        number = number  /10;
      }
      reverse(second.begin(),second.end());
      return second;
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